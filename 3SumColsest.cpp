#include<iostream>
#include<vector>
using namespace std;

 int threeSumClosest(vector<int>& nums, int target) {
        int diff = INT_MAX;
        int result = 0;
        sort(nums.begin(), nums.end());
        
        int k=0;
        int j=0;
        
        while(j+3<=nums.size()){
            int total = 0;
            for(int i=0;i<3;++i){
                total +=nums[j+i];
                cout<<total<<endl;
                
                ++k;  
            }
            int new_diff = abs(total - target);
                if( new_diff < diff){
                    diff = new_diff;
                    result = total;
                }
            j++;
        }
        
        return result;
        
        
    }

    int main(){
        vector<int> v1;
        v1.push_back(-1);
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(-4);
        int target = 1;

        cout<<threeSumClosest(v1, target);

        return 0;
    }