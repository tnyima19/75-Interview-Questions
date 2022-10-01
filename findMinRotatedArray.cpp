#include<iostream>
#include<vector>
using namespace std;

/*
Find Minimum in Rotated Array. 
Suppose an arry of legth n sorted inascending order is rotated. 
    [0,1,2,4,5,6,7]
    changes to 
    [4,5,6,7,0,1,2] if it was rotated 4 times, 
    [0,1,2,4,5,6,7] if it ws rotated 7 times. 

    Notice
    [a[n-1], a[0], a[2], ... , a[n-2]]. 
                1
    [3,4,5,1,2] -> [1,2,3,4,5]
    rotated once, 
    2,3,4, 5, 1]
    

    Given the sorted rotaed array nums of unique elements, return teh 
    minimum element of this array. 
    You must write the algo that runs in O(log n) time, 

        // we know rotation takes place, 
        find the place of rotation, is usually teh min, 



*/
int findMin(vector<int>& nums) {
        int find = 1;
        for(int i=0;i<nums.size()-1;++i){
            if(nums[i]> nums[i+1]){
                return nums[i+1];
            }else{
                find = 0;
            }
        }
        
        return nums[0];
        
    }

    int main(){


        return 0;
    }