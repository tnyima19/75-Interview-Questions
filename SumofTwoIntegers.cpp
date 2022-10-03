#include<iostream>
using namespace std;

/*
Sum of two integers without using + and -
XOR operation, 

    final is 1 and 0 = 1
            1 and 1 = 0
            0 and 0 = 0;
            0 and 0 = 0;

            complexity  = O(1) constant time, 
            if there are too many O(n) time depends on the loop, which may not happen many times, depending on the constrains. 

*/
int getSum(int a, int b){
    int j = 1 ;

    while(b!=0){
        int tmp = (a&b )<< 1; // get b value before a modifies,
        a = a ^ b;// j is a xor b  = 0010
        b = tmp ;// k = a and b; = 1001
        //b = b << 1; shift left 1 = 10010
        //a = a ^ b; // 10000
        
    }

    return a;

}

int main(){

    int sum = getSum(9,11);
    cout<<sum<<endl; 

    return 0;

}