//Find Piot Point using Recursion.
//Time-Complexity: O(n) where n is the number of elements in the array.
//Space-Complexity:- O(n) for recursive stack space.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
   int findpivot(vector<int>&num,int index,int leftsum, int totalsum){
        //base case
        if(index==num.size())
        return -1;
        int rightsum=totalsum-leftsum-num[index];
        if(leftsum==rightsum)
        return index;
        return findpivot(num,index+1, leftsum+num[index], totalsum);
   } 
   int pivotIndex(vector<int>& nums){
    int totalsum=0;
    for(int i=0;i<nums.size();i++){
        totalsum=totalsum+nums[i];
    }
    int result=findpivot(nums,0,0,totalsum);
    return result;
   }
};