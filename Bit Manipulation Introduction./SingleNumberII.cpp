// Find the single number in an array where every other number appears three times.
// Using Bit Manipulation.
// Time Complexity: O(N) where N is the number of elements in the array.
// Space Complexity: O(1).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ones=0,twoes=0;
        for(int i=0;i<nums.size();i++){ 
         ones=(ones^nums[i]) & ~twoes; // First appearance: record it in ones.
         twoes=(twoes^nums[i]) & ~ones;// Second appearance: record it in twoes.
        }
        return ones;
    }
};