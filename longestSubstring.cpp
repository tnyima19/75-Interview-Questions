#include<iostream>
#include<set>
#include<iterator>
using namespace std;

   bool checkRepeatChar(string s, int i, int j){
        set<char> set;
        
        for(int k=i;k<=j;++k){
            //if(k>= i && k<= j){
                if(set.find(s[k]) != set.end()){//found
                    cout<<k<<endl;
                    return false;
                }else {
                    
                    set.insert(s[k]);
                }
        }
        return true;
    }
    
    int lengthOfLongestSubstring(string s) {
    //brute force method. 
        //longest substring without repeating characters
        int count = 0;
        int max_length = 0;
        
        
        for(int i=0;i<s.size()-1;++i){
            for(int j=i+1;j<s.size();++j){
                if(checkRepeatChar(s, i, j) == true){

                    cout<<"output: "<<"i= "<<i<<" j ="<<j<<" ";
                    count = j-i +1;
                    cout<<count<<" - ";
                    max_length = max(max_length, count);
                    cout<<max_length<<" "<<endl;
                }
            }
        }
        return max_length;
        
    }


    int main(){
        string s = "abcabcbb";
        cout<<lengthOfLongestSubstring(s)<<endl;



    }