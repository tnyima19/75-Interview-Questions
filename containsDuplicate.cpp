#include<iostream>
#include<vector>
using namespace std;

void swap(int& a , int& b){
    int temp = a;
    a = b;
    b = temp;
}

int partition(vector<int>& arr, int start, int end ){
    int pivot = arr[start];
    int count = 0;
    for(int i=start +1; i<=end; ++i){
        if (arr[i]<= pivot){
            count++;
        }
    }

    int pivotIndex = start + count;
    swap(arr[pivotIndex], arr[start]);

    int i = start;
    int j = end;
    while( i< pivotIndex && j> pivotIndex){
        while(arr[i]<= pivot){
            i++;
        }
        while(arr[j]> pivot){
            j--;
        }
        if(i < pivotIndex && j> pivotIndex){
            swap(arr[i++], arr[j--]);
        }
    }

    return pivotIndex;
}

void quickSort(vector<int>& nums, int start , int end){
    if (start >= end)
        return;
    
    int p = partition(nums, start, end);
    quickSort(nums, start, p-1);
    quickSort(nums, p+1, end);
    


}
bool containsDuplicate(vector<int>& nums){

// alternative method, hash, 


quickSort(nums, 0, nums.size()-1);
int i=0;
while(i<nums.size()-1){
    if(nums[i]== nums[i+1]){
        return true;
    }
}
return false;


    
}