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

int main(){

    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr = productExceptSelf(arr);

    for(int i=0;i<arr.size();++i){
        cout<<arr[i]<<endl;
    }
    return 0;
}