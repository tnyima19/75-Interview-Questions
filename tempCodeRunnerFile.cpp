#include<iostream>
#include<vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums){
 int total = 1;
        int self;
        for(int i=0;i<nums.size();++i){
            total = 1;
            for(int j=0;j<nums.size();++j){
                self = i;
                //total = 1;
                if(j != self){
                    total = total * nums[j];
                }
            }
            nums[self] = total;
        }
        
        return nums;
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