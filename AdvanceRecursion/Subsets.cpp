// Given an integer array nums of unique elements, return all possible subsets (the power set) LeetCode 78.

//Backtracking Approach
//Time Complexity: O(n × 2ⁿ)     2ⁿ recursive calls × O(n) to copy current subset.
// Space Complexity: O(n)       O(n) space for the recursion stack and current subset.

#include<iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> current;
        vector<vector<int>> ans;
        int index=0;
        generate(0,nums,current,ans);
        return ans;

    }
    void generate(int index, vector<int>&nums,vector<int>&current,vector<vector<int>>&ans){ 
         if(index==nums.size()){
            ans.push_back(current);
            return;
        }
        current.push_back(nums[index]);
        generate(index+1,nums,current,ans);
        current.pop_back();
        generate(index+1,nums,current,ans);
        }
};