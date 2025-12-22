// Intersection of two Arrays
// In this approach, we will check if the element of the first array is present in second array and if present then we will check for duplictaes in the result array before inserting it.
//Time Complexity: O(n^3) due to three nested loops.
//Space Complexity: O(min(m,n)) result array will store least elements.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int n1=nums1.size();
        int n2=nums2.size();
        for(int i=0;i<n1;i++){
            for(int j=0;j<n2;j++){
                if(nums1[i]==nums2[j]){
                    bool added=false;
                    for(int k=0;k<result.size();k++){
                        if(result[k]==nums1[i]) added=true;
                    }
                    if(!added)
                    result.push_back(nums1[i]);
                }
            }
        }
        return result;
    }
};

//################################################################################################
//Optimized Approach using Sorting and Two Pointers
//Time Complexity: O(nlogn + mlogm) due to sorting both arrays.
//Space Complexity: O(min(m,n)) result array will store least elements.
class Solution { 
public:
   vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> result;
        int i=0,j=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]==nums2[j]){
                result.push_back(nums1[i]);
                int currentval=nums1[i];
              while(i<nums1.size() && nums1[i]==currentval) i++; // skip same values in nums1 array
              while(j<nums2.size() && nums2[j]==currentval) j++; // skip same values in nums2 array
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        return result;
    }
};