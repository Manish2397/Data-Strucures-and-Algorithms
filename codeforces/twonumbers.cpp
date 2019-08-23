#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/problemset/problem/1206/A
int main(){
	int n,m,maxn=INT_MIN,maxm=INT_MIN;
	cin>>n;
	int *a =new int[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	cin>>m;
	int *b =new int[m];
	for(int i=0;i<m;i++){
		cin>>b[i];
		maxm=max(maxm,b[i]);
	}
	cout<<maxn<<" "<<maxm<<endl;
}
