#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

int longestCommonSubsequence(string s1,string s2,int a,int b,int dp[][100]){
	if(a==0 or b==0){
		return 0;
	}
	if(dp[a-1][b-1]!=-1){
		return dp[a-1][b-1];
	}
	if(s1[a-1]==s2[b-1]){
		dp[a-1][b-1]=1+longestCommonSubsequence(s1,s2,a-1,b-1,dp);
		return dp[a-1][b-1];
	}
	else{
		dp[a-1][b-1]=max(longestCommonSubsequence(s1,s2,a-1,b,dp),longestCommonSubsequence(s1,s2,a,b-1,dp));
		return dp[a-1][b-1];
	}
}


int main(){
	string s1="aabcdabfvghj";
	string s2="abafvghjbcd";
	int dp[100][100];
	memset(dp,-1,sizeof(dp));
	cout<<longestCommonSubsequence(s1,s2,s1.length(),s2.length(),dp);
}
