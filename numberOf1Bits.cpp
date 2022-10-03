#include<iostream>
#include<vector>
using namespace std;

/*
write a function taht takes an unsigned integer and returns teh number of 
'1' bits it has ( also known as Hamming weight). 

Note: 
    * Note that in some languages, such as Java, there is no unsigned integer type. In this case, 
    the input will be given as a signed integer type. It should not affect your implementation, as the integer's internal binary 
    representation in the same, whether it is signed or unsigned. 

    * In java the compiler represents the signed integers using 2's complemtn notation. There for in ex 3 the input
    represents teh signed integer . -3
    


    takes unsigned, 
    count the number of 1 bits, 


*/
// method 1;
int hammingWeight(uint32_t n){
    int count = 0;
    int result =0;
    while(n!= 0){
        result = n & 1; // result is either 0 or 1;
        if(result == 1){
            count++;
        }
        // shift n to the right 
        n = n>> 1;
    }
    return count;

}

// method 2;
/*

while loop{  // it gets rid of 1 bits, 
n = n & (n-1)
    result ++

}
*/

int hammingWeight2(uint32_t n){
    int count= 0;

    while(n != 0){
        n = n &(n-1);// removing one bit
        count++;
    }
    return count;

}



int main(){

    int total = hammingWeight2(20);
    cout<<total<<endl;
    int total2 = hammingWeight(20);
    cout<<"new:"<<total2<<endl;


    return 0;
}