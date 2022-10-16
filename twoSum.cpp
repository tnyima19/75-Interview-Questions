#include<iostream>
#include<vector>
#include<map>
using namespace std;


vector<int> twoSum(vector<int>& nums, int target){
    map<int,int> hm;
    vector<int> final;

    for(int i=0;i<nums.size();++i){
        // now get the complement from the target. 
        int complement = target - nums[i];
        if(hm.find(complement) != hm.end()){
            // it is in the hash. so reutrn the indexes of both
            final.push_back(i);
            final.push_back(hm[complement]);
        }
        // insert in hm
        hm[nums[i]]= i;
    }

    return final;

}