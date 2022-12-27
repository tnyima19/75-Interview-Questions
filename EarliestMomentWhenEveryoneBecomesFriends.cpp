#include<iostream>
#include<stdlib.h>
#include<vector>
using namespace std;
int FindGrandPa(vector<int> &parent, int i){
    int res = i;
    while(res != parent[res]){
        res = parent[res];
    }
    return res;
}

/* parents
0  0  1
------------
0  1  2
res = 0
pare[res] = 0


*/
bool CheckAllParents(vector<int> &parent){
    int grandPa = parent[0];
    for(int i=0;i<parent.size(); ++i){
        if(parent[i] != grandPa){
            return false;
        }
    }
    return true;
}
void UpdateParent(vector<int> &parent){
    for(int i=0;i<parent.size();++i){
        parent[i] = FindGrandPa(parent, i);
    }
}

bool UnionSet(vector<int>&parent, vector<int> &rank, int i, int j){
int p1 = FindGrandPa(parent, i);
int p2 = FindGrandPa(parent, j);

if(rank[p1]> rank[p2]){
    parent[p2] = p1;
    ++rank[p1];
}else{
    parent[p1] = p2;
    ++rank[p2];
}
UpdateParent(parent);
if(CheckAllParents(parent)){
    return true;
}
return false;
     
}


int earliestAcq(vector<vector<int> >& logs, int n) {
    vector<int> parent(n);
    for(int i=0;i<n;++i){
        parent[i] = i;
    }
    vector<int> rank(n,1);
    //sort 
    sort(logs.begin(), logs.end(), [] (const vector<int> &a, const vector<int> &b) {return a[0]< b[0];});

    for(auto log: logs){
        if(UnionSet(parent, rank, log[1],log[2])){
            return log[0];

        }
    }
    return -1;

}

int main(){
    vector<vector<int>> logs = {{20190101,0,1},{20190104,3,4},{20190107,2,3},{20190211,1,5},{20190224,2,4},{20190301,0,3},{20190312,1,2},{20190322,4,5}};

     int n = 6;
    int time = earliestAcq(logs, n);
    cout<<"the time taken is: "<<time<<endl;

    return 0;
}