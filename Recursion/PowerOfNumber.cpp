// Use of Recursion to find the power of a number where power is the reverse of the given number.
// If the number is 12 and its reverse is 21 so we need to calculate 12^21.
// Approach 1:- Find the reverse of the number then multiply the number its power times recursively.
//Time-Complexity: O(rev) where rev is the power of the number.
//Space-Complexity:- O(rev) for recursive stack space.
#include <iostream>
using namespace std;
class Solution {
  public:
  int reversenumber(int n){
      int d=0;
      int rev=0;
       while(n!=0){
          d=n%10;
          rev=rev*10+d;
          n=n/10;
      }
      return rev;
  }
  int power(int a,int b){
      if(b==0)return 1;
      else
      return a* power(a,b-1);
  }
  
    int reverseExponentiation(int n) {
        int num=reversenumber(n);
        return power(n,num);
    }
    
};
//##################################################################################
//Optimized Code: By divding the power by 2 at each step and storing it into half variable.
//Time-Complexity: O(log rev) where rev is the power of the number.
//Space-Complexity:- O(log rev) for recursive stack space.

class Solution {
  public:
  int reversenumber(int n){
      int d=0;
      int rev=0;
       while(n!=0){
          d=n%10;
          rev=rev*10+d;
          n=n/10;
      }
      return rev;
  }
  int power(int a,int b){
      if(b==0)return 1;
      int half=power(a,b/2);
      if(b%2==0)
      return half*half;
      else
      return a*half*half;
  }

    int reverseExponentiation(int n) {
        int num=reversenumber(n);
        return power(n,num);
    }
};