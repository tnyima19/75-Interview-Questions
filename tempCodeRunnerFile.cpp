#include<iostream>
#include<vector>
using namespace std;

int maxProduct(vector<int>& nums){

    int j;
    int max = 0;
    int total =1;
    for(int i=0;i<nums.size();++i){
        j = i+1;
        while(j<nums.size()){
            total = nums[i];
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
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(-2);
    arr.push_back(4);

    int max = maxProduct(arr);

    cout<<max<<endl;
    return 0;


}