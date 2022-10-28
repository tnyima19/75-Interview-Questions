#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s) {
        stack<char> brackets;
        
       if(s.size() == 1)
           return false;
        
        for(int i=0;i<s.size();++i){
            if(i == 0 &&(s[i] == ')' || s[i] == '}' || s[i] == ']')){
                return false;
            }
            if(s[i] == '(' || s[i] == '{' || s[i] == '['){
                // open brackets, 
                brackets.push(s[i]);
            }else{
                if(s[i] == ')'){
                    if(brackets.top() == '('){
                        brackets.pop();
                    }else{
                        return false;
                    }
                }else if (s[i] == '}'){
                    if(brackets.top() == '{'){
                        brackets.pop();
                    }else{
                        return false;
                    }
                }else if(s[i] == ']'){
                    if(brackets.top() == '['){
                        brackets.pop();
                    }else{
                        return false;
                    }
                }
            }
        }
        
        if(brackets.empty())
            return true;
        
        return false;
        
        
    }

    int main(){
        string s = "()";
        if(isValid(s))
            cout<<" true it is "<<endl;
        else{
            cout<<" it is false;"<<endl;
        }

    return 0;

    }