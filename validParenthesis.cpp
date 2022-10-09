#include<iostream>
#include<vector>
using namespace std;

/*
STRING SECTION. 
Given a string s containing just hte character '(', ')', '{','}', '[',']' 
determine if the input string is valid 
An input string is valid if: 
    1. Open brackets must be closed by the same type of brackets. 
    2. Open brackets must be closed in the correct order. 
    3. Every close bracket has a corresponding open bracket of the same type. 


*/


bool validParenthesis(string s){
    vector<char> brackets;
    if(s.size() == 1){
        return false;
    }

    for(int i =0;i<s.size();++i){
        if(s[i]== '('|| s[i]== '{'|| s[i]== '['){
            // when its open brackets
            brackets.push_back(s[i]);
        }

        if(s[i] == ')'|| s[i] == '}'|| s[i]== ']'){
            if(s[i] == ')'&& brackets[brackets.size()-1]== '('){ // i need to know if brackes has the '(' in order to popback
                brackets.pop_back();
            }else if (s[i]== '}' && brackets[brackets.size()-1] == '{'){
                brackets.pop_back();
            }else if (s[i]== ']' && brackets[brackets.size()-1] == '['){
                brackets.pop_back();
            }
        }
    }
    
    if(brackets.size() == 0){
        return true;
    }


    return false;
}

int main(){

    string s = "[{()}]";
    if (validParenthesis(s) == true){
        cout<<"true"<<endl;
    }else{
        cout<<"false"<<endl;
    }

    return 0;
}