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
int maxProduct2(vector<int>& nums){
    int curr;
    int max_so_far= nums[0];
    int min_so_far = nums[0];
    int max = 1;
    int total;
    if(nums.size()==1){
        return nums[0];
    }


    for(int i=1;i<nums.size();++i){
        //cout<<"i am"<<endl;
       // total = nums[i] * 
        if(nums[i] > 0){
            max_so_far *= nums[i];
            //cout<<max_so_far<< "oo"<<endl;
            //cout<<"max > 0"<<endl;
            if(max_so_far> max){
                max = max_so_far;
                //cout<<max<<"max"<<endl;
            }
        }else if(nums[i] == 0){
            if(max_so_far == 1){// no changes have occured, and no maximum number above
                max = nums[i];
            }

            max_so_far = 1;
            min_so_far = 1;
            //cout<<" i am in zero"<<endl;
            
        }else if(nums[i] < 0 ){// when negative
            //min_so_far *= nums[i];
            //cout<<"i am in min"<<endl;
            if(min_so_far< 0){
                max_so_far = min_so_far * nums[i];
                min_so_far = 1;
                if(max< max_so_far){
                    max = max_so_far;
                    //cout<<"max:"<<max<<endl;
                }
            }else{
                // min_so_far > 0
                min_so_far = max_so_far * nums[i];
                cout<<"min:"<< min_so_far<<endl;
                max_so_far = 1;
                //cout<<"min"<<endl;
                //cout<<max<<"max at this point"<<endl; 
            }
        }
    }

    //cout<<max<<endl;

    return max;

}
// DYNAMIC PROGRAMMING METHOD.
/*
rather than looking for every possible sub array to get the largest produce, we can scan teh array and solve smaller sub 
problems. 
Let's see theis problem as a problem of getting the highest combo chain. The way combo chains work is that they build on 
top of previous combo chains that you are acquired. The simplest case is when the numbers in nums are all positive
numbers. In that case, you would only need to keep on multiplyin ghte accumulated result to get a bigger and 
bigger combo chain as you progress. 

However, two things can disrupt your combo chain: 
    * Zeros
    * Negative numbers. 
Zeros will reset your combo chain . A high score which you acheived will be recordedin placeholder result. 
You will have to restart your combo chanin after zero. If you encounter another combo chain which is higher than the recor
ded high score in result, you just need to update the result. 

Negative numbers are a bit tricky. A single negative number can flip the largest combo chain to a 
very small number. This may sound like your combo chain has been completely disrupted but if you encounter anotehr negative
number, your combo chain can be saved. Unlike zero, you still havea hope of saving your combo chain as long as you have anotehr 
negative number in the nums(Theink of this second negative nuber as an antidote for 
the poison you just consumed. )However, if you encoutner a zero while you are looking your another negative number to save your 
combo chain, you lose the hosp of savin gthat combo chain. 

While going through numbers in nums, we will have to keep track of hte maximum product up to that number( we will 
call max_so_far) and minimum product up to that number ( we will call min_so_far). The reason behind keeping track of max_so_far
is to keep track of accumulated product of positive numbers. The reason behind keeping track of min_so_far is to properly handle 
negative numbers. 
keep track of max_so_far 
and min_so_far

max_so_far is updated by taking the maximum value among: 
1. Current number.
    *This value will be picked if hte accumulated product has been really bad(even compared to the current number). This can happen
    when the current number has a preceding zero(e.g.[0,4]) or is preceded by a single negative number(e.g.[-3,5]).
2. Product of the last max_so_far and current number. 
    * This value will be picked if hte accumulated product has been steadily increasing(all positive numbers).
3. Product of last min_so_far and current number. 
    * This value will be picked if hte cureent number is a negative number and combo chain has been disrupted by a single 
    negative number before(In a sense , this value is like an antidote to an already poisoned combo chain).





*/



int main(){
    vector<int> arr;
    arr.push_back(-2);
    //arr.push_back(0);
    //arr.push_back(1);
    //arr.push_back(4);

    int max = maxProduct2(arr);

    cout<<max<<endl;
    return 0;


}