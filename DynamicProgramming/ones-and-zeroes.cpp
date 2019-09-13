//https://leetcode.com/problems/ones-and-zeroes

class Solution {
public:
    int dp[601][101][101];
    int solve(vector<string>& strs, int m, int n,int ind){
        if(ind>=strs.size() or (m==0 and n==0) ) return 0;
        if(dp[ind][m][n] != 0)
            return dp[ind][m][n];
        int cnt0 = 0;
        int cnt1=0;
        string s = strs[ind];
        
        for(int i=0;i<s.length();i++){
            if(s[i]=='1') cnt1++;
            if(s[i]=='0') cnt0++;
        }
        if(cnt1<=n and cnt0<=m){
            return dp[ind][m][n]=max(1+solve(strs,m-cnt0,n-cnt1,ind+1),solve(strs,m,n,ind+1));
            
        }
        else{
            return dp[ind][m][n] = solve(strs,m,n,ind+1);
        }
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        memset(dp,0,sizeof dp);
        return solve(strs,m,n,0);
    }
};


