class Solution {
public:

    void dfs(vector<vector<int>>& image,int i, int j, int newcolour, int ogcolour)
    {

    if(i<0 || j<0 || i>= image.size() || j >=image[0].size() || image[i][j]!=ogcolour || image[i][j]==newcolour)
    return;
    
    image[i][j]=newcolour;

    dfs(image,i-1,j, newcolour, ogcolour);
    dfs(image,i,j+1, newcolour, ogcolour);
    dfs(image,i+1,j, newcolour, ogcolour);
    dfs(image,i,j-1, newcolour, ogcolour);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dfs(image,sr,sc,color,image[sr][sc]);
        return image;
        
    }
};