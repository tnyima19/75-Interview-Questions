#include<iostream>
#include<vector>
using namespace std;

/*
Container with most water. 
    arr hieght of length n
    n vertical lines, 
        end points: (i,0) and (i, height[i])
    Find two lines that together with x-axis form a container, such that the container contains most water. 

        return maximum amount of water a container can store. 

    // find left highest, peak

    two points(i,j), get the area, 
    put it as max_area, 
    move the (j), 
    if (new_max is less than prev max, )
        move i. 
    else 
        move j

*/


int maxArea(vector<int>& height){
        int left = 0;
        int right = 0;
        int area = 0;
        int max_area = 0;
        int max_height_left;
        for(int i=0;i<height.size()/2;++i){
            if(height[i]> max_height_left)
                max_height_left = height[i]; 
        }


        for(int i=max_height_left;i<height.size();++i){
            area = height[max_height_left] * height[i];
            if(area >= max_area){
                max_area = area;
            }
            
        }

        return max_area;

    
}