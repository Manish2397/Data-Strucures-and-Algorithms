#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
int dp[10000];
int solve(int amt,int coins[]){
	if(amt==0){
		return 0;
	}
	if(dp[amt]!=-1) return dp[amt];
	if(amt<0) return INT_MAX;
	int mn = INT_MAX;
	for(int i=0;i<3/*(sizeof(coins)/sizeof(coins[0]))*/;i++){
		if(coins[i]>amt) continue;
		mn=min(mn,1+solve(amt-coins[i],coins));
	}
	return dp[amt]=mn;
}

int main(){
	int amt = 5;
	int coins[] = {7,6,1};
	memset(dp,-1,sizeof(dp));
	cout<<solve(amt,coins);
}
