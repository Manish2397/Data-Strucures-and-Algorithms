#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

int nCr(int n,int r, int dp[][200] ){
	int ans=0;
	if(r==0 or r==n) return 1;
	else{
		if(dp[n][r]==0){
			ans=nCr(n-1,r-1,dp)+nCr(n-1,r,dp);
			dp[n][r]=ans;
			return ans;
		}
		else return dp[n][r];	
	}

}

int main(){
	int dp[200][200]={0};
	cout<<nCr(200,6,dp)<<endl;
	
}