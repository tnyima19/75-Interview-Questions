#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;
bool dfs(vector<vector<int> > list, unordered_set<int>& visited, int curr){
        if(visited.find(curr) != visited.end()){
            return false;
        }
        visited.insert(curr);
        
        for(auto neighbor: list[curr]){
            dfs(list, visited, neighbor);
        }
        
        return true;
        
    }
    
    int countComponents(int n, vector<vector<int> >& edges) {
        unordered_set<int> visited;
        vector<vector<int> > l(n);
        for(auto edge: edges){
            l[edge[0]].push_back(edge[1]);
            l[edge[1]].push_back(edge[0]);
        }
        int count= 0;
        
        for(int i=0;i<n;++i){
            if(visited.find(i) == visited.end()){
            if(dfs(l, visited, i)){
                count++;
            }
            }
        }
        
        return count;
        
    }

    int main(){
        vector<int> v1;
        v1.push_back(0);
        v1.push_back(1);
        vector<int> v2;
        v2.push_back(1);
        v2.push_back(2);
        vector<int> v3;
        v3.push_back(3);
        v3.push_back(4);

        vector<vector<int> > l;
        l.push_back(v1);
        l.push_back(v2);
        l.push_back(v3);
        int n= 5;

        cout<<countComponents(n, l);


        return 0;
    }