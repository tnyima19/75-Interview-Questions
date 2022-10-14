#include<iostream>
#include<vector>
#include<cctype>
using namespace std;


/*
A phrase is a palindrome if , after converting all uppercase letters into lowercase letters removing all 
non-alphanumeric characters, it read the same forward and backward. Alphanumeric characters include letters adn numbers. 
Two ways, 
1. using alnum and newString 

2. second way , 
A constant time, 
using pointer. 
left and right pointer. 

one string , lets call it a. 
if reverse_string then a = a it is palindrome. 

STEPS 
1. reove spaces ',', numbers, other non alpha numeric.

for(int i=s.size()-1;i>=0;--i){
    if(s[i] != s[j]){
        return false;
    }
}

return true;

*/
bool isPalindrome(string s){
    /*
    This method takes O(n+ n) space 
    and O(n+ n) time.
    */
    // put in a vecotr, 
    vector<char> str;
    for(int i=0;i<s.size();++i){
        if(isalnum(s[i])){
            // turn into sall letters
            s[i]= tolower(s[i]);
            str.push_back(s[i]);
        }
    }
    int j = 0;
    for(int i= str.size()-1; i >=0; --i){
        if(str[i]!= str[j]){
            cout<<str[i]<<endl;
            cout<<str[j]<<endl;
            return false;
        }
        j++;
    }

    return true;


}
/*
0-9 Ascii(48-57)
A-Z Ascii(65- 90)
a-z Ascii(97-122)

*/
bool isalpha_numeric(char a){
   // cout<<int(a)<<endl;
   int i = 48;
   int j = 57;
   int k = 65;
   int l = 90;
   int m = 97;
   int n = 122;

   

    if( ( ('A' <= a <= 'Z') ||( 'a' <= a <= 'z')){
        //cout<<"ascii:" << a << ":"<<int(a)<<endl;
        return true;
    }
    return false;
}


/*

this method is in constant time, 

*/
bool isPalindrome2(string s){
int j = 0;
    for(int i=s.size()-1;i>= 0;--i){
        while(!isalpha_numeric(s[j])){
            //cout<<s[j]<<endl;
            ++j;
        }
        while( !isalpha_numeric(s[i])){
            i--;
        }
        s[i]= tolower(s[i]);
        s[j] = tolower(s[j]);
       // cout<<"back: "<<s[i]<<endl;
       // cout<<"front: "<<s[j]<<endl;

        if(s[i] != s[j]){
            //cout<<s[i]<<endl;
            //cout<<s[j]<<endl;
            return false;
        }

        j++;


    }



        return true;

}



int main(){
    string s = "A man, a plan, a canal: Panama";

    // for(int i=0;i<s.size();++i){
    //     cout<<int(s[i])<<endl;
    // }

    if(isPalindrome2(s)){
        cout<<"TRue"<<endl;
    }else {
        cout<<"FAlse "<<endl;
    }


    return 0;
}