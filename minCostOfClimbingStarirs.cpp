#include<iostream>
#include<vector>
#include<map>
using namespace std;

 int climbStairs(vector<int>& cost, int i){
        if( i== 0){
            return cost[i];
        }
        if(i < 0 ){
            return 0;
        }
        
            if(i< cost.size()){
                return cost[i] + min(climbStairs(cost, i-1), climbStairs(cost, i-2));
            }else{

                return  min( climbStairs(cost, i-1), climbStairs(cost, i-2));
            }
        
    }

 int climbStairsMemo(vector<int>& cost, int i, map<int, int>& index_min){
        if( i== 0){
            index_min[i] = cost[i];
            return cost[i];
        }
        if(i < 0 ){
            return 0;
        }
        if(index_min.find(i) != index_min.end()){
            return index_min[i];
        }
        
            if(i< cost.size()){
                int total_min = cost[i] + min(climbStairs(cost, i-1), climbStairs(cost, i-2));
                index_min[i] = total_min;
                return total_min;
            }else{
                int total_min = min( climbStairs(cost, i-1), climbStairs(cost, i-2));
                index_min[i] = total_min;
                return  total_min;
            }
        
    }
    
    int minCostClimbingStairs(vector<int>& cost) {
        int start = cost.size() ;// first step 2
        int total_steps = 0;
        int min_Steps = 10000;
        int steps_one = 0;
        int steps_two = 0;
        map<int,int> index_min;
        min_Steps = climbStairsMemo(cost, start, index_min);
        
        return min_Steps;
    }


    int main(){
        vector<int> arr;
        //arr.push_back(1);
        //arr.push_back(100);
        //arr.push_back(1);
        arr.push_back(1);
        arr.push_back(1);
        arr.push_back(100);
        arr.push_back(1);
        arr.push_back(1);
        arr.push_back(100);
        arr.push_back(1);
        int steps = minCostClimbingStairs(arr);
        cout<<steps<<endl;

    }