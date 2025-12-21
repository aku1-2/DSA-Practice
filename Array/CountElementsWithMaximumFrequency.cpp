//Count Elements with Maximum Frequency in an Array

/* 1. Brute Force Approach:- We will count the frequency of every element and then compare it with the maximum frequency 
and add all the elements that have the maximum frequency.*/
//Time Complexity: O(n^2) because of nested loops.
//Space Complexity: O(1) because we are using a fixed number of variables.

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


//######################################################################################################


// 2. Optimized Solution using unordered_map
//Time complexity: O(n) average
//Space Complexity: O(n)

 int maxFrequencyElements(vector<int>& nums) {
     unordered_map<int, int> freq;
     int result=0;
     int maxfreq=0;
     
     for(int i=0; i<nums.size();i++){
         int num=nums[i];
         freq[num]++;
         if (freq[num] > maxfreq)
             maxfreq = freq[num];
     }
     // Sum up all elements that have the maximum frequency
        for (auto i = freq.begin(); i!= freq.end(); i++) {
            if (i->second == maxfreq)
                result += i->second;
        }

        return result;
 }









