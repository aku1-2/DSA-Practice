//Count Elements with Maximum Frequency in an Array
/* Brute Force Approach:- We will count the frequency of every element and then compare it with maximum frequency 
and add all the elements which have maximum frequency.*/
//Time Complexity: O(N^2) because of nested loops.
//Space Complexity: O(1) because we are using fixed number of variables.
#include <iostream>
using namespace std;
class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        int n=nums.size();//array size
        int maxfreq=0;//maximum frequency 
        int result=0;//count of elements
        //find maximum freq first

        // Find the maximum frequency
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count > maxfreq) {
                maxfreq = count;
            }
        }

        // Add up all elements that have maxfreq
        for (int i = 0; i < n; i++) {
            int count = 0;
            for (int j = 0; j < n; j++) {
                if (nums[j] == nums[i]) {
                    count++;
                }
            }
            if (count == maxfreq) {
                result++; // count every occurrence
            }
        }

        return result;
    }
};

int main(){
    Solution sol;
    vector<int> nums = {1, 2, 2, 3, 3, 3, 4};
    int count = sol.maxFrequencyElements(nums);
    cout << "Count of elements with maximum frequency: " << count << endl;
    return 0;
}