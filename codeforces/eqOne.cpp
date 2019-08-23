#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

lld solve(lld arr[],lld n,int flag,int ind,lld dp[][2]){
	if(ind==n){
		if(flag==0) return INT_MAX;
		return 0;
	}
	else if(dp[ind][flag]!=-1) return dp[ind][flag];
	else{
		lld temp1 = abs(arr[0]-1) + solve(arr+1,n,flag,ind+1,dp);
		lld temp2 = abs(arr[0]+1)+solve(arr+1,n,flag^1,ind+1,dp);
		dp[ind][flag]=min(temp1,temp2);
		return min(temp1,temp2);
	}
}


int main(){
	lld n;
	cin>>n;
	lld *arr = new lld[n];
	lld dp[n][2];
	for(lld i=0;i<n;i++){
		dp[i][0]=-1;
		dp[i][1]=-1;
	}
	for(lld i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<solve(arr,n,1,0,dp)<<endl;
}
