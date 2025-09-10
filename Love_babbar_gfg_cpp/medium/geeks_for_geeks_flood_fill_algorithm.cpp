#include <iostream>
#include <vector>
using namespace std;
class Solution {
  public:
    void rec_color_fill(vector<vector<int>>& image, int sr, int sc, int newColor,int Oldcolor,int x,int y)
    {
        if(sr>=x || sr<0)
        {
            return;
        }
        if(sc>=y || sc<0)
        {
            return;
        }
        if(image[sr][sc]==Oldcolor)
        {
            image[sr][sc] = newColor;
            // rec_color_fill(image,sr+1,sc+1,newColor,Oldcolor,x,y);
            rec_color_fill(image,sr+1,sc+0,newColor,Oldcolor,x,y);
            // rec_color_fill(image,sr+1,sc-1,newColor,Oldcolor,x,y);
            rec_color_fill(image,sr+0,sc+1,newColor,Oldcolor,x,y);
            rec_color_fill(image,sr+0,sc-1,newColor,Oldcolor,x,y);
            // rec_color_fill(image,sr-1,sc+1,newColor,Oldcolor,x,y);
            rec_color_fill(image,sr-1,sc+0,newColor,Oldcolor,x,y);
            // rec_color_fill(image,sr-1,sc-1,newColor,Oldcolor,x,y);
            return;
        }
        else
        {
            return;
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc,
                                  int newColor) {
        // Code here
        if(newColor == image[sr][sc])
        {
            return image;
        }
        rec_color_fill(image,sr,sc,newColor,image[sr][sc],image.size(),image[0].size());
        return image;
    }
};