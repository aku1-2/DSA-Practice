// Rotate Array k times
// Brute Force Approach:- We will rotate the array k times by moving the last element to the front required times i.e., by k times.
//Time Complexity: O(n*k) because outer loop executes k times and inner loop executes n times.
//Space Complexity: O(1) because we are using fixed number of variables(last and loop counters i,j).

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        k=k%n; // to handle k>n.
       for(int i=0;i<k;i++){
           int last = nums[n-1];
        //shifting elements to right.
           for(int j= n-1; j > 0; j--){
               nums[j]=nums[j-1];
        }
        nums[0]=last;// add last element to first position
       } 
    }
};
int main(){
    Solution s;
    vector<int> nums={1,2,3,4,5,6,7};
    int k=3;
    s.rotate(nums,k);
    cout<<"Roated Array: ";
    for(int i=0; i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}




//##################################################################################################
// Optimized Solution
//Time Complexity: O(n) because we are using reverse function which goes through the array once.
//Space Complexity: O(1) because we are reversing the array in place.

void rotate(vector<int>& nums, int k) {
        int n= nums.size();
       k=k%n; // to handle k>n
       reverse(nums.begin(),nums.end()); // reverse the array
       reverse(nums.begin(),nums.begin()+k);// reverse first k elements 
       reverse(nums.begin()+k,nums.end());// reverse remaining elements 
    }
