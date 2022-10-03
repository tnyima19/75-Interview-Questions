#include<iostream>
#include<vector>
using namespace std;

/*
Given an array nums containing n distinct numbers in the range
[0,n], return the only number in the range that is missing from the
array. 

input: nums = [3,0,1]
reutrn 2;

explantaion : n = 3 since there are 3 numbers, so all the numbers are in the range [0,3[] 2 is the missing num]


nums: [9,6,4,2,3,5,7,0,1]
output = 8
8 is the missing number, 

solving involving Bits, 
 one number is missing. 
 // array is not sorted, 

Binary many diff solution 
2 methods, 
using hash map, O(N)memory, 

O(1)- memory,


alternative 
XOR operator - ( 2 ^ 3), if both 

xor two same num, gives, 0
anyother num xor num = num;

O(1)memory, 
O(2n);


sum of arr - sum[0, n];

*/


int missingNumber(vector<int>& nums){
    int largest_num= 0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]> largest_num){
            largest_num = nums[i];// found the largest number
        }
    }// 

    int j=0;
    for(int i=0;i<nums;++i){
        
    }


    return 
}


// Binary method
int missingNumberBinaryMethod(vector<int> nums){
    int largest_num = 0;
    vector<int> second_arr  
    for(int i=0;i<nums.size();++i){
        if(nums[i]> largest_num){
            largest_num = nums[i];
        }
    }

    for(int i=0;i<largest_num;++i){
        second_arr.push_back(i);
    }

    int result = nums ^ second_arr;

    return result; 



}

int missingNumbersSumMethod(vector<int> nums){
    int largest_num = 0;
    int sum1 = 0;
    for(int i=0;i<nums.size();++i){
        if(nums[i]> largest_num){
            largest_num = nums[i];
        }
        sum1 += num[i];
    }
    vector<int> second;
    int sum2 = 0;
    for(int i=0;i<=largest_num;++i){
        second.push_back(i);
        sum2 += i;
    }

    int result = sum2 - sum1;
    return result;
}

int main(){


    return 0;
}