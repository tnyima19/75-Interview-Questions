#include<iostream>
#include<vector>
using namespace std;

void shift(vector<int>& nums, int k, int n){
        int temp = nums[k];
        for(int i=k;i<nums.size()-1;++i){
            //while(nums[i] == nums[i+1]){
                nums[i] = nums[i+1];
            //}
            //nums[i] = nums[i+1];
        }
        nums[n] = temp;
    }
    
    int removeDuplicates(vector<int>& nums) {
        // there are multiple ways, 
        //brute force method.
        int count = 0;
        int i=0;
        int n = nums.size()-1;
        while(i<=n){
            if(nums[i] == nums[i+1]){
                //cout<<nums[i]<<endl;
                //cout<<"i = "<<i<<endl;
                shift(nums, i, n);
                n--;
                count++;
            }else{
                ++i;
            }
            
        }
        cout<<"n : "<<n<<endl;
        return n;
        
    }


    int main(){
        vector<int> nums;
        // nums.push_back(0);
        // nums.push_back(0);
        // nums.push_back(1);
        // nums.push_back(1);
        // nums.push_back(1);
        //  nums.push_back(2);
        //  nums.push_back(2);
        //  nums.push_back(3);
        //  nums.push_back(3);
        //  nums.push_back(4);
        nums.push_back(1);
        nums.push_back(1);
        int n = removeDuplicates(nums);

        for(int i=0;i<n;++i){
            cout<<nums[i]<<endl;
        }

    }