// Rotate a matrix by 90 degrees clockwise.
// We will first transpose the matrix and then reverse each row to get the rotated matrix.
// Time-Complexity:- O(m*n) we are traversing each element of the matrix. 
// Space-Complexity:- O(1) no extra space is used.
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
         //Transpose of matrix
         for(int i=0;i<n;i++){
            for(int j=i+1; j<n; j++)
                   swap(matrix[i][j],matrix[j][i]);
         }
         //reverse each row
         for(int i=0;i<n; i++){
            reverse(matrix[i].begin(),matrix[i].end());
         }
    }
};