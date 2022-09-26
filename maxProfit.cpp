#include<iostream>
#include<vector>
using namespace std;

int maxProfit(vector<int>& prices){
    int profit;
    int max_profit = 0;
    int i=0;
    int j = i+1;

    while(j<prices.size()){
        if(prices[i]> prices[j]){// incase of loss
            i++;
        }else{
            profit = prices[j] -prices[i];
            if(max_profit< profit){
                max_profit = profit;
            }
            j++;
        }
    }

    return max_profit;
}


int main(){

    // new project
    
    return 0;
}

