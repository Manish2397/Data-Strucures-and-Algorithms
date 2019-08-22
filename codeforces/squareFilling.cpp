#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/contest/1207/problem/B
int main(){
	int n,m;
	int arr[51][51];
	cin>>n>>m;
	vector< pair<int,int > > v;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			cin>>arr[i][j];
		}
	}
	int flag=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j]==1){
				if(arr[i][j+1]==1 and arr[i+1][j]==1 and arr[i+1][j+1]==1){
					v.push_back({i,j});
				}
				else if((arr[i][j+1]==1 and arr[i+1][j]==1 and arr[i+1][j+1]==1) or(arr[i][j-1]==1 and arr[i+1][j-1]==1 and arr[i+1][j]) or (arr[i-1][j]==1 and arr[i-1][j+1]==1 and arr[i][j+1]==1) or (arr[i][j-1]==1 and arr[i-1][j-1]==1 and arr[i-1][j]==1)){
					continue;
				}
				else{
					flag=0;
				}
			}
			if(flag==0){
				break;
			}
		}
		if(flag==0) break;
	}
	if(flag==0){
		cout<<-1<<endl;
	}
	else{
		cout<<v.size()<<endl;
		for(auto x:v){
			cout<<x.first<<" "<<x.second<<endl;
		}
	}
	
	 
	
}
