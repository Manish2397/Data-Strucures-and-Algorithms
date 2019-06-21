#include<bits/stdc++.h>
using namespace std;

int maxSplit(int n,int dp[]){
	int ans = INT_MIN,temp;
	if(n==2){
		return 1;
	}
	else{
		if(dp[n]!=0){
			return dp[n];
		}
		for(int i=1;i<n;i++){
			temp=i*max(n-i,maxSplit(n-i,dp));
			ans=max(ans,temp);
		}
	}
	dp[n]=ans;
	return ans;
}


int main() {
	int n;
	cin>>n;
	int dp[100005]={0};
	int ans=maxSplit(n,dp);
	cout<<ans<<endl;
    return 0;
}