#include<iostream>
#include<vector>
using namespace std;


vector<int> spiralOrder(vector<vector<int> >& matrix) {
        
        //leftmost , rightmost side
        int left = 0;
        int right = matrix[0].size();
        int top = 0;
        int bottom = matrix.size();
        vector<int> result;
        // first we go from left to right 
        
       while(top < bottom && left < right){
           // left to right
           for(int i=left;i<right;++i){
               result.push_back(matrix[top][i]);
           }
           // top to bottom on the right
           for(int i=top+1;i<bottom;++i){
               result.push_back(matrix[i][right]);
           }
           if(left < right &&  top < bottom){
               for(int i=right-1;i>left;--i){
                   result.push_back(matrix[bottom][i]);
               }
               // bottom to top
               for(int i=bottom-1;i>top;--i){
                   result.push_back(matrix[i][left]);
               }
           }
           ++top;
           --right;
           ++left;
           --bottom;
           
       }
        return result;
        
    }


    int main(){

        vector<vector<int> > vect
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        };
        spiralOrder(vect);

        return 0;
    }