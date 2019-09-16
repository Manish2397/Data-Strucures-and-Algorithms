#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//find no. of ways to go from 1,1 to n,m in a 2D matrix


int arr[100][100];
int solve(int arr[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(i==0 or j==0){
				arr[i][j]=1;
			}
			else{
				arr[i][j]=arr[i-1][j]+arr[i][j-1];
			}
		}
	}
}
int main(){
	int n,m;
	cin>>n>>m;
	memset(arr,-1,sizeof(arr));
	solve(arr,n,m);
	cout<<arr[n-1][m-1]<<endl;
}
