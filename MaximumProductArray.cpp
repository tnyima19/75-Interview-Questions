#include<iostream>
#include<vector>
using namespace std;


// BRUTE FORCE REDO
int maxProduct(vector<int>& nums){

    int j;
    int max;
    int total =1;
    if(nums.size()==1){
        return nums[0];
    }
    max = nums[0];

    for(int i=0;i<nums.size()-1;++i){
        j = i+1;
        while(j<nums.size()&& total > max){
            //total = nums[i];
            total = total * nums[j];
            if(max< total){
                max = total;
            }
            j++;
        }

    }


    return max; 
}

int main(){
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(2);
    //arr.push_back(-2);
    //arr.push_back(4);

    int max = maxProduct(arr);

    cout<<max<<endl;
    return 0;


}