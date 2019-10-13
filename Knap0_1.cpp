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
	int n,W,w[200],c[200];
	int dp[200][200];
	cout<<"\nNAME : DHRUV BANSAL\nCLASS : CSE - A\nROLL NO. : 01720802717\n\n";
	cout<<"Value of N : ";
	cin>>n;
	cout<<"Total Bag capacity : ";
	cin>>W;
	cout<<"Enter n weights\n";
	for(int i=1;i<=n;i++)cin>>w[i];
	cout<<"Enter n cost respectively\n";
	for(int i=1;i<=n;i++)cin>>c[i];
	
	for(int i=1;i<=n;i++){
		for(int j=1;j<=W;j++){
	
			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
	
			if(j-w[i]>=0)
				dp[i][j]=max(dp[i][j] ,dp[i-1][j-w[i]]+c[i]);
		}
	}

	cout<<"Max cost : "<<dp[n][W]<<endl<<endl;
	return 0;
}