#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;
lld solve(lld arr1[],lld arr2[],lld n,lld ptr,lld dp[][2]){
	if(n==1){
		return ptr==0?arr1[0]:arr2[0];
	}
	if(dp[n][ptr]!=-1) return dp[n][ptr];
	if(ptr==0){
		lld ans1 = arr1[0] + solve(arr1+1,arr2+1,n-1,ptr^1,dp);
		lld ans2 = 0 + solve(arr1+1,arr2+1,n-1,ptr,dp);
		dp[n][ptr]=max(ans1,ans2);
		return dp[n][ptr];
	}
	if(ptr==1){
		lld ans1 = arr2[0] + solve(arr1+1,arr2+1,n-1,ptr^1,dp);
		lld ans2 = 0 + solve(arr1+1,arr2+1,n-1,ptr,dp);

		dp[n][ptr]=max(ans1,ans2);
		return dp[n][ptr];
	}
}



int main(){
	lld n;
	cin>>n;
	lld *arr1 = new lld[n];
	lld *arr2 = new lld[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	lld dp[n+1][2];
	for(int i=0;i<=n;i++){
		dp[i][0]=-1;
		dp[i][1]=-1;
	}
	// for(int i=0;i<n;i++){
	// 	cout<<dp[i][0]<<dp[i][1];
	// }
	lld ans1=solve(arr1,arr2,n,0,dp);
	lld ans2=solve(arr1,arr2,n,1,dp);
	lld ans = max(ans1,ans2);
	cout<<ans;
}
