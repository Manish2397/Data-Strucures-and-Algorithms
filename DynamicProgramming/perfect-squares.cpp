//https://leetcode.com/problems/perfect-squares/submissions/

class Solution {
public:
    int dp[10000];
    int solve(int n){
        if(dp[n]!=-1) return dp[n];
        if(n==0){
            return 0;
        }
        int sq = sqrt(n);
        int mn = INT_MAX;
        for(int i=sq;i>=1;i--){
            mn=min(mn,solve(n-i*i)+1);
        }
        return dp[n]=mn;
    }
    int numSquares(int n) {
        memset(dp,-1,sizeof(dp));
        return solve(n);
    }
};