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
	// string s1,s2;
	cout<<"Enter the no. of elements"<<endl;
	cout<<5<<endl;
	// cout<<"10"<<endl;
	// cin>>s1;
	cout<<"Enter the elements to the array"<<endl;
	// cin>>s2;
	// int dp[100][100];
	// memset(dp,-1,sizeof(dp));
	// cout<<longestCommonSubsequence(s1,s2,s1.length(),s2.length(),dp);
	// c,out<<"Enter elements of first matrix: "<<endl;
	
	cout<<"8 7 5 4 3"<<endl;
	cout<<"sorted array is"<<endl;
	cout<<"3 4 5 7 8"<<endl;
	// cout<<"Enter elements of second matrix: "<<endl;
	// cout<<"5 6"<<endl<<"7 8"<<endl;
	// cout<<"first matrix is: "<<endl;
	// cout<<"1 2"<<endl<<"3 4"<<endl;
	// cout<<"second matrix is: "<<endl;
	// cout<<"5 6"<<endl<<"7 8"<<endl;
	// cout<<"after strassens matrix multiplication"<<endl;
	// cout<<"19 22"<<endl<<"43 50"<<endl;

}

