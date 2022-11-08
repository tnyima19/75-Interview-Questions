#include<iostream>
#include<map>
#include<vector>

 map<int, int> hm;
    int coinChange(vector<int>& coins, int amount) {
        if( amount == 0){
            return 0;
        } 
        int false_value = 100000;
        if(amount < 1){
            return -1;
        }
        if(hm.find(amount) != hm.end()){
            return hm[amount];
        }
        
        int count = false_value;
        for(int i=0;i<coins.size();++i){
            int total = coinChange(coins, amount-coins[i]);// 3-2(1), 1-2 (-1)
            if(total >= 0){
                total = total + 1;
                //cout<<total<<endl;
                count = min(total, count);
            }

            //count = min(total, count);
        }
        
        if(count == false_value){
            count = -1;
        }
            //cout<<count<<endl;
            hm[amount] = count;
    
        
        return hm[amount];
        
    }
    

