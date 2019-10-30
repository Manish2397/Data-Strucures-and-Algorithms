#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/contest/1238/problem/B
int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld n,r,temp;
		cin>>n>>r;
		vector<lld> v;
		map<lld,int> m;
		for(lld i=0;i<n;i++){
			cin>>temp;
			v.pb(temp);
		}
		sort(v.begin(),v.end());
		lld cnt=0;
		lld ind=n-1;
		while(v[ind]-(r*cnt)>0 and ind>=0){
			if(!m.count(v[ind])){
				m[v[ind]]=1;
				cnt++;
				ind--;
			}
			else{
				ind--;
			}
		}
		cout<<cnt<<endl;
	}
}
