#include<iostream>
#include<math.h>


using namespace std;


uint32_t reverseBits(uint32_t  n){

    uint32_t result = 0;
    int j=0;
    int bit_pointer = 31;
    while(n != 0){
        j = n & 1;
        if( j == 1){
            result += pow(2,bit_pointer);
        }

        bit_pointer--;


    }


    return result;
}