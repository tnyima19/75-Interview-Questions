#include<iostream>
#include<vector>
using namespace std;


/*
givne integer n, retnr an arry of legnth n+1 

Brute force, 
O(n log n)

*/

vector<int> countBits(int n){
    int count = 0;
    vector<int> arr;
    for(int i=0;i<=n; ++i){
        int j = i;
        count = 0;
        while(j != 0){
            int result = j & 1;// you can also j % 2 or j * 2/3, 
            if(result == 1){
                count++;
            }
            arr.push_back(count);
            j = j >> 1; // move to the right
        }

    }

    return arr;


}

/*
METHOD 2 IS DYNAMIC PROGRAMMING METHOD. 

*/
vector<int>countBits2(int n){


    return 
}



int main(){


    return 0;
}