// Find Majority time occuring element in an array
// Brute Force:- We create 2 loops and counts the frequency of every element and if that element is occurred more than half of array's size then it is the majority element.
//Time Complexity: O(n^2) due t nested loops.
//Space Complexity: O(1) as we are using constant space.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int maxcountelement=0;
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<nums.size();j++){
                if(nums[i]==nums[j])
                count++;
            }
           if(count>(nums.size()/2)){ 
            maxcountelement=nums[i];
            break;
            }
            count=0;
        }
        return maxcountelement;
    }
};

//#########################################################################################################
//Boyer-Moore Voting Algorithm:- In this approach we assume that majority element is last surviving element after cancelling every elements counts.
//Time Complexity:- O(n) 
//Space Complexity:- O(1) 
class Solution{ 
public:
   int majorityElement(vector<int>& nums){
      int count=0;
      int candidate;
      for(int i=0;i<nums.size();i++){
         if(count==0){
            candidate=nums[i];
        }
            if(nums[i]==candidate){
                count++;
            }
            else{
                count--;
            }
        
    }
    return candidate;
  }
};