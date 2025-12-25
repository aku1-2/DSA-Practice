//Finding Median In Row Wise Sorted Matrix
//We will binary search on value of range low to high.
//For mid value we will count value less than mid value in each row using upper_bound function.
////If the count is less than desired position we will move low to mid+1 else high to mid-1.
//Time Complexity:- O(32*r*log(c)) r is the number of row we are traversing and c is the number of columns and we are doing binary search on 32 bits.
//Space Complexity:- O(1) no extra space is used.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution{
   public:
   int median(vector<vector<int>>& matrix ,int r, int c){
    int desired= (r*c +1 )/2;
    int low= matrix[0][0];
    int high=matrix[0][c-1];
    for(int i=1;i<r;i++){
        low=min(low,matrix[i][0]);//Finding actual mininmum value in the matrix
        high=max(high,matrix[i][c-1]);//Finding actual maximum value in the matrix
    }
    while(low<=high){
        int mid=low +(high - low)/2;
        int count=0;
        for(int i=0;i<r;i++){
            count+= upper_bound(matrix[i].begin(),matrix[i].end(),mid)-matrix[i].begin();
        }
        if(count<desired){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
   }
};