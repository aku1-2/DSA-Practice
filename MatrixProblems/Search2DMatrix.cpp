//Search a 2D Matrix Leetcode Problem 74.
// We will compare target with the last element in first row and see whether it is large number or small number then we will traverse according to it.
//Time-Complexity:- O(m+n) we goes through few rows and few columns at max.
//Space-Complexity:- O(1) no extra space is created.
//It is also called Staircase Search.

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int m= matrix.size();
         int n= matrix[0].size();
         int i=0,j=n-1;
         while(i<m && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if(matrix[i][j]>target){ 
                j--;// As the target is smaller we move left.
            }
            else{
                i++;//As the target is larger we move down.
            }
         }
         return false;
    }
};