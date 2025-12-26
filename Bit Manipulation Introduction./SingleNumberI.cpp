// Find the single number in an array where every other number appears twice.
// Using XOR Operation.
// Time Complexity: O(N) where N is the number of elements in the array.
// Space Complexity: O(1)

#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result=0;
        for(int i=0;i<nums.size();i++){
            result^=nums[i];// Finding single number using XOR
        }
        return result;
    }
};