// Check if a number is a power of two.
// A number is a power of two if it has exactly one set bit in its binary representation.
// Time Complexity: O(1)
// Space Complexity: O(1)

#include <iostream>
using namespace std;
class Solution  {
  public:
    bool isPowerOfTwo(int n) {
        if(n<=0) return false; // Negative numbers and zero are not powers of two
        return (n & (n - 1)) == 0; // Check if there is only one set bit
    }
};
