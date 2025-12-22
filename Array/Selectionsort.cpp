//Selection Sort 
//In selection sort, we find minimum element from the unsorted array and swap it with to the last sorted element.
//Time Complexity: O(n^2) because of nested loops.
//Space Complexity: O(1) because we are using fixed number of variables

#include<iostream>
using namespace std;

void Selectionsort(int arr[], int n){
    for(int i=0;i<n;i++){
        int index=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[index]){
                index=j;
            }
        }
        swap(arr[i],arr[index]);
    }
}
       
  
int main(){
    int n;
    cout<<" enter the size of array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements:-";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    Selectionsort(arr,n);
    cout<<"Sorted Array:-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}