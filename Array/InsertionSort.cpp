//Insertion sort
//In insertion Sort we take one element as a key and compare it with the all elements before it then we place it at the correct position.
//Time Complexity: O(n^2) because of nested loops. 
//Space Complexity: O(1) because we are using fixed number of variables.
#include<iostream>
using namespace std;

void Insertionsort(int arr[], int n){
    for(int i=1; i<n;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0 &&arr[j]>key){
            arr[j+1]=arr[j];  //shifting element to right to make space for key value
            j--;
        }
        arr[j+1]=key;
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
    Insertionsort(arr,n);
    cout<<"Sorted Array:-";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}


//#########################################################################################################
//Optimized Insertion Sort:- We can Optimized it using a Variable to check if the array is sorted and break when there is no shifting needed.
//Time Complexity: O(n) in best case 
//Space Complexity: O(1)

void InsertionSort(int arr[], int n){
    for(int i=1;i<n;i++){
        int key=arr[i];
        int j=i-1;
        bool swapped=false; //to check if any shifting happened
        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
            swapped=true; // it means shifting happened
        }
        arr[j+1]=key;
        if(!swapped){ // if no shifting happened, array is sorted
            break; // exit the loop
        }
    }
}

