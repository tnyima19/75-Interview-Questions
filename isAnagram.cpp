#include<iostream>
#include<vector>
#include<map>
#include<iterator>


using namespace std;

bool isAnagram(string s, string t) {
        // anagram problem 
        if(s.size() != t.size())
            return false;
    map<char,int> hm;
        
        for(int i=0;i<s.size();++i){
            if(hm.find(s[i]) != hm.end()){
                // found
                hm[s[i]] += 1;
            }else{
                // not found, then insert
                //hm.insert(s[i]);
                hm[s[i]] = 1;
            }
        }
        
        
        // i think i am making a mistake of not using iterator
        for(int i=0;i<t.size();++i){
            map<char, int>:: iterator itr = hm.find(t[i]);
            if(itr != hm.end()){
                // found, 
                cout<<t[i]<<" ";
                cout<<hm[t[i]]<<endl;
                hm[t[i]] -= 1;
                if(hm[t[i]] < 1){
                    cout<<"erase "<< t[i]<<": " <<hm[t[i]]<<endl;
                    hm.erase(itr); // delete using iterator if you dont the map wont be empty. 
                }
            }else{
                //cout<<"ia m"<<endl;
                return false;
                
            }
        }
        
        if(hm.empty())
            return true;
        

        cout<<"i am here"<<endl;
        return false;
        
        
    }


    int main(){
        string s = "anagram";
        string s1 = "nagaram";

        if (isAnagram(s, s1))
            cout<<"is true"<<endl;
        else
            cout<<"is false"<<endl;


        return 0;




    }