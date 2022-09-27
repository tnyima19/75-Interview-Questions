#include<iostream>
#include<vector>
using namespace std;

// BRUTE Force method.

vector<int> productExceptSelf(vector<int>& nums){

 int total = 1;
        int self;
        vector<int> new_arr;
        for(int i=0;i<nums.size();++i){
            //total = 1;
            for(int j=0;j<nums.size();++j){
                self = i;
                //total = 1;
                if(j != self){
                    //cout<<"Total:"<<total<<endl;
                    //cout<<"nums[j]:"<< nums[j]<<endl;
                    total = total * nums[j];
                }
            }
            new_arr.push_back(total);
            total = 1;
        }
        
        return new_arr;
}

// Alternate method. 
vector<int> productExceptSelf2(vector<int>& nums){
    int left[nums.size()];
    int right[nums.size()];
    int total = 1;
    vector<int> arr;
    for(int i=0; i<nums.size();++i){
        if(i==0){
            left[i]= 1;
        }else{
            left[i]= left[i-1]* nums[i-1];
        }
        
    }

    total = 1;
    for(int j=nums.size()-1;j>=0;--j){
        if(j==nums.size()-1){
            right[j]= 1;
        }else{
            right[j] = right[j+1] * nums[j+1];
        }
    }


    for(int i=0;i<nums.size();++i){
        total = left[i]* right[i];
        arr.push_back(total);
    }
    return arr;


}

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr = productExceptSelf2(arr);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<endl;
    }
    return 0;
}