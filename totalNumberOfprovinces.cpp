#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;


bool dfs(vector<vector<int> > isConnected, int i, unordered_set<int>& visited){
        if(visited.find(i) != visited.end()){
            return false;// already in visited so no need to count
        }
        visited.insert(i);
        // check the neighbors of i
        for(int j=0;j<isConnected[i].size();++j){
            if(isConnected[i][j] == 1){
                dfs(isConnected, j, visited);
            }
        }
        
        return true;// that mea
    }
    
    int findCircleNum(vector<vector<int> >& isConnected) {
        unordered_set<int> visited;
        int count = 0;
        for(int i=0;i<isConnected.size();++i){
                //if(visited.find(i) != visited.end()){
                if(dfs(isConnected, i, visited)){
                    count++;
                }
                //}
            
        }
        
        return count;
        
    }


int main(){
    vector<int> v1;
    v1.push_back(1);
     v1.push_back(1);
    v1.push_back(0);
    
    vector<int> v2;
    v1.push_back(1);
    v1.push_back(1);
    v1.push_back(0);
    vector<int> v3;
    v1.push_back(0);v1.push_back(0);v1.push_back(1);

    vector<vector<int> > isConnected;
    isConnected.push_back(v1);
    isConnected.push_back(v2);
    isConnected.push_back(v3);

    int result = findCircleNum(isConnected);
    cout<<result<<endl;

    return 0;
}