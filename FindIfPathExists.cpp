#include<iostream>
#include<vector>
#include<unordered_set>
using namespace std;

 bool dfs(vector<vector<int>>& a_list, int source, int destination, vector<bool>& visited){
        if(source == destination)
            return true;
        if(visited[source] == true){
            // if already visited return false;
            return false;
        }
        
        visited[source] = true;
        cout<<source<<endl;
        bool found = false;
        for(auto neighbor: a_list[source]){
            if(dfs(a_list, neighbor, destination, visited)){
                return true;
            }
        }
        return found;
    }
    
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
            vector<vector<int> > a_list(n);
            //unordered_set<int> visited;
        // way to make more efficient, use vector visited
        vector<bool> visited(n, false);
        
        for(auto edge: edges){
            a_list[edge[0]].push_back(edge[1]);
            a_list[edge[1]].push_back(edge[0]);
        }
        
        //for(int i=0;i<n;++i){
            if(dfs(a_list, source, destination, visited)){
                //cout<<"i am here"<<endl;
                return true;
            }
        //}
        
        return false;
        
    }