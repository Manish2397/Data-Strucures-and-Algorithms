#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/problemset/problem/1208/A

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		lld a,b,n,c;
		cin>>a>>b>>n;
		c=a^b;
		lld arr[] = {a,b,c};
		int pos = n%3;
		cout<<arr[pos]<<endl;
	}
	 
	
}
