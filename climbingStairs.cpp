#include<iostream>
#include<vector>
using namespace std;

/*
CLIMBING STAIRS, 
TAKING 1 STEP OR 2 STEPS 


if 2 steps 
1 or 2 steps 
2 or 1 step 


if 3 steps
1 and 2 step
2 and 1 step, 
1 and 1 and 1 step 
3 ways. 


USING TREES 
            0
           /  \
           1    2
          / \
        2   3
      / \  / \
      3 4 4  5
    / \ / /
    4  5  5

    8 diff ways 

we can do it using DFS 
using recursion. 


MEMOIZATION 

TOP DOWN MEMOIZATION 

BOTTOM UP MEMOIZATION. 



*/


/*
You are climbing staircase. It takes n steps to reach teh top. 
Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top. 

input : n = 2
output : 2
Explanation there are two ways 
*/



int climb_Stairs(int i, int n, int memo[]){
    if( i> n){
        return 0;
    }
    if( i == n){
        return 1;// because we are in the final step
    }
    if(memo[i] > 0){
        return memo[i];// why we already have the value of memo[i]
    }
    memo[i] = climb_Stairs(i+1, n, memo) + climb_Stairs(i+2, n, memo);
    cout<<memo[i]<<endl;
    return memo[i];

}

// down fucntion depends on the above so first the above write down. 
int climbStairs(int n){
    int memo[n+1] ;// initialize array, dynamic array. 
    int initial_step = 0;
    return climb_Stairs(initial_step,n, memo);
}

int main(){
    int n = 2;
    cout<<climbStairs(n)<<endl;


    return 0;
}

