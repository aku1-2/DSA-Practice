// Maximum Product Subarray 
/*in this approach we keep track of minimum and maximu product and 
we can also swap min and max product when current element is negative so that by mumltiplying by negative number the result can be bigger positive number.*/
// Time Complexity: O(n) where n is the size of the input array.
// Space Complexity: O(1) as we are using constant space.
#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod = nums[0];
        int minprod = nums[0];
        int result = nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0)
            swap(maxprod,minprod);
            maxprod=max(nums[i],nums[i]*maxprod);
            minprod=min(nums[i],nums[i]*minprod);
            result = max(result,maxprod);
        }
        return result;
    }
};