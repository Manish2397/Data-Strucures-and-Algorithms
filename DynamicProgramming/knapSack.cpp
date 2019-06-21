#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;
	int weight[]={0,1,3,4,5,'\0'};
	int value[]={0,1,4,5,7,'\0'};

int knapSack(int n,int sack){
	int ans=0;
	if(n==0 or sack==0){
		return 0;
	}
	else if(weight[n]>sack){
		ans=knapSack(n-1,sack);
	}
	int temp1,temp2;
	temp1=value[n]+knapSack(n-1,sack-weight[n]);
	temp2=knapSack(n-1,sack);
	ans=max(temp1,temp2);
	return ans;
	
}

int main(){

	int dp[9]={0};
	int sack=7;
	int ans=knapSack(3,sack);
	cout<<ans;

	
}