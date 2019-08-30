
#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://leetcode.com/problems/stone-game

int main(){
    
    
}


class Solution {
public:
    int dp[500][500];
    
    int solve(vector<int>& piles,int flag,int s, int e){
        if(s>e) return 0;
        int alex= 0;
        int lee = 0;
        if(dp[s][e]!=0) return dp[s][e];
        if(flag ==1){
            int q1 = piles[s] + solve(piles,flag^1,s+1,e);
            int q2 = piles[e] + solve(piles,flag^1,s,e-1);
            alex+=max(q1,q2);
            dp[s][e]=alex;
            return alex;
        }
        else{
            int q1 = solve(piles,flag^1,s+1,e);
            int q2 = solve(piles,flag^1,s,e-1);
            lee+=min(q1,q2);
            dp[s][e]=lee;
            return lee;
        }
        
    }
    
    bool stoneGame(vector<int>& piles) {
        int sum =0;
        for(auto x:piles){
            sum+=x;
        }
        int alex= 0;
        alex = solve(piles,1,0,piles.size()-1);
        return alex>sum-alex?1:0;
    }
};