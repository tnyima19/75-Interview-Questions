#include<iostream>
#include<vector>
using namespace std;

    int maxSubArray(vector<int>& nums) {
        //using two pointer, 
        if(nums.size() == 0)
            return 0;
        if(nums.size() == 1){
            return nums[0];
        }
        
        int i =0;
        int j = i+1;
        int total = nums[i];
        int max_total = total;
        
        while(i<nums.size() && j < nums.size()){
            total += nums[j];
            if(max_total > total){
                total = total - nums[i];
                ++i;
            }
            cout<<nums[i]<<endl;
            cout<<"total : "<< total<<endl;
            cout<<"nums[j]"<<nums[j]<<endl;
            if(max_total < total){
                max_total = total;
                cout<<"max: " <<max_total<<endl;
            }
           ++j;
        }
        
        return max_total;
    }

    int main(){
        vector<int> arr;
        arr.push_back(-2);
        arr.push_back(1);
        arr.push_back(-3);
        arr.push_back(4);
        arr.push_back(-1);
        arr.push_back(2);
        arr.push_back(1);
        arr.push_back(-5);
        arr.push_back(4);

        cout<<maxSubArray(arr)<<endl;

        return 0;
    }