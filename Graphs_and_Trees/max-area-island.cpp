class Solution {
public:
    int vis[51][51] = {0};
    
    int solve(int r,int c,vector<vector<int>>& grid){
        if(r<0 or r>=grid.size() or c<0 or c >= grid[0].size() or grid[r][c]==0){
            return 0;
        }
        if(vis[r][c]!=0){ return 0;}
        vis[r][c]=1;
        int area1 = solve(r+1,c,grid);
        int area2 = solve(r-1,c,grid);
        int area3 = solve(r,c+1,grid);
        int area4 = solve(r,c-1,grid);
        return 1+area1 + area2 +area3+area4;
    }
    
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i = 0 ;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                ans = max(ans,solve(i,j,grid));
            }
        }
        return ans;
    }
};

#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;




int main(){
    
}