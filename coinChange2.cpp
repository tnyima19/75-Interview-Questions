#include<iostream>
#include<vector>
#include<map>
#include<unordered_set>
using namespace std;


int recursion(vector<int>& coins, map<int,int>& memo, int amount){
    if(amount == 0){
        return 0;
    }
    if( amount < 0){

        return -1;
    }
    if(memo.find(amount) != memo.end()){
        return memo[amount];
    }
    int min_total = INT_MAX;

    for(int i=0;i<coins.size();++i){
        int target = amount - coins[i];
        int total_coin = recursion(coins,memo, target);
        if(total_coin >= 0){
            min_total = min(min_total, 1+ total_coin);
            memo[amount] = min_total;
        }
                    
    }
    if(min_total == INT_MAX){
            return -1;
        }

    return memo[amount];

}

 int coinChange(vector<int>& coins, int amount) {
        // i need memoization, 
        map<int, int> memo;
       return recursion(coins, memo, amount);
    }   



    /*
    BOTTOM UP METHOD
    START FORM 0 -> AMOUNT

    */
   int coinChangeBU(vector<int> coins, int amount){
    vector<int> dp(amount +1, amount +1);
    dp[0] = 0;

        for(int i=1;i<amount+1;++i){
            for(auto coin: coins){
                if(i - coin >= 0){
                    dp[i] = min(dp[i], 1+ dp[i-coin]);
                }
            }
        }

        if(dp[amount] == amount + 1){
            return -1;
        }

        return dp[amount];

   }


    int main(){
        vector<int> v1;
        v1.push_back(1);
        v1.push_back(2);
        v1.push_back(5);
        int target = 11;

        cout<<coinChangeBU(v1, target);

        return 0;


    }