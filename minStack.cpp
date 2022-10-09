#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;


/*
Design a stack that supports push, pop, top and retrieving the minimum element in constant time. 

Implement the MinStack class: 
    * Min Stack() initializes the stack object 
    * void push(int val) pushes the element val onto the stack. 
    * void pop() removes the element of the top of the stack 
    * int top() gets the top elment of the stack 
    * int getMin() retrieves the minimum element in the stack 


TRY REDO AGAIN

*/

class MinStack {
public:
    MinStack() {
        
        size = 0;
        
    }
    
    void push(int val) {
        nums.push(val);
        size= size +1 ;
        if (val < minimum.top()){
            minimum.push(val);// add new minimum.
        }else {
            minimum.push(minimum.top())
        }

    }
    
    void pop() { // takes out the min value from stack
        nums.pop();
        size = size-1;
    }
    
    int top() {
        return nums.top();
        
    }
    
    int getMin() {
        return minimum.top();
        
    }
private: 
    stack<int> nums;
    stack<int> minimum;
    int size;
    //int min;
};