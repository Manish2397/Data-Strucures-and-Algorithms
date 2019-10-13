#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back
 
ll mod=1000000009;
string s1,s2;
int dp[2000][2000];

int main()
{	
	// ios
	cout<<"\nNAME : DHRUV BANSAL\nCLASS : CSE - A\nROLL NO. : 01720802717\n\n";
	cout<<"Enter the String 1 : ";
	cin>>s1;
	cout<<"Enter the String 2 : ";
	cin>>s2;
	
	for(int i=s1.size()-1;i>=0;i--){
		for(int j=s2.size()-1;j>=0;j--){
			dp[i][j]=max(dp[i][j+1],dp[i+1][j]);
			if(s1[i]==s2[j]){
				dp[i][j]=max(dp[i][j],1+dp[i+1][j+1]);
			}
		}
	}
	int lcs = dp[0][0];
	cout<<"Lcs length : "<<lcs<<endl<<endl;
	return 0;
}