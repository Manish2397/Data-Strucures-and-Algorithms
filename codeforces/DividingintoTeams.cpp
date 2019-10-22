#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/contest/1249/problem/a
int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld n,temp;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.pb(temp);
		}
		if(n==1){cout<<1<<endl;
		continue;}
		int flag=0;
		sort(v.begin(),v.end());
		for(int i=1;i<n;i++){
			if(flag==1) break;
			if((v[i]-v[i-1])==1 or (v[i]-v[i-1])==-1){
				flag=1;
			}
		}
		int ans;
		flag==1?ans=2:ans=1;
		cout<<ans<<endl;
	}
	return 0;
}
