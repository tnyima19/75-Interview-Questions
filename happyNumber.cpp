#include<iostream>
#include<map>
#include<unordered_set>
using namespace std;

 bool isHappy(int n) {
        int q = 0;
        int r = 0;
        int total ;
        
        unordered_set<int> set;
        
        while(n != 100 ){
            if(set.find(n)!= set.end()){
                return false;
            }
            cout<<n<<endl;
            set.insert(n);
            q = n/10;
            r = n %10;
            //cout<<q<<endl;
            n = (q* q) + (r*r);
            
        }
        
        return true;
        
    }

    int main(){

        if(isHappy(2)){
            cout<<"treue"<<endl;
        }else{
            cout<<"false"<<endl;
        }
        return 0;
    }