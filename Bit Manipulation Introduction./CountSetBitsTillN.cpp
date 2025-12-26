// Count Set Bits till N
// Given a number N, find the total count of set bits from 1 to N.
//Time Complexity: O(log N)
//Space Complexity: O(1)
#include <iostream>
using namespace std;

// Brute Force Approach
class Solution {
  public:
    int countBits(int n) {
        int count =0;
        while(n>0){
            count+= (n&1); // check the bit is 1 or not 
            n=n>>1;// (n/2)
        }
       
        return count;
    }
    
    int countSetBits(int n)
    {
        int total=0;
     for(int i=1;i<=n;i++){
         total+=countBits(i);
     } 
     return total;
    }
};

// Optimized Approach
class Solution {
  public:
int largestPowerOf2(int n) {
    int x = 0;
    while ((1 << x) <= n) {
        x++;
    }
    return x - 1;
}
int countSetBits(int n) {
    if (n == 0)
        return 0;
    int x = largestPowerOf2(n);
    int bitsUpTo2x = x * (1 << (x - 1));
    int msbFrom2xToN = n - (1 << x) + 1;
    int rest = n - (1 << x);
    return bitsUpTo2x + msbFrom2xToN + countSetBits(rest);
}
};
