//Toggle bits in the given range
// Given a number N and two numbers L and R. Toggle all bits from position L to R in N and return the new N.
// Time Complexity: O(R-L+1) Loop runs from l-1 to r-1.
// Space Complexity: O(1)
#include <iostream>
using namespace std;
class Solution {
  public:
    int toggleBits(int n, int l, int r) {
       for(int i=l-1;i<r;i++){
           n=n^(1<<i);
       }
        return n;
    }
};