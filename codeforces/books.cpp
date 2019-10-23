#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/contest/1249/problem/B1

int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld n;
		cin>>n;
		vector<lld> v;
		v.pb(0);
		lld temp;
		vector<lld> ans(n+1);
		for(lld i=0;i<n;i++){
			cin>>temp;
			v.pb(temp);
		}
		map<lld,lld> m;
		for(lld i=1;i<=n;i++){
			vector<lld> temp3;
			lld ans=1;
			lld temp2 =i;
			if(m.count(i)){
				continue;
			}
			if(i==v[i]){
				m[i]=1;
				continue;
			}
			while(i!=v[temp2]){
				ans++;
				temp3.pb(temp2);
				temp2 = v[temp2];
			}
			for(lld j=0;j<temp3.size();j++){
				//cout<<"--"<<ans<<endl;
				m[temp3[j]] = ans;
			}

		}
		for(lld j=1;j<=n;j++){
			cout<<m[j]<<" ";
		}
		cout<<endl;
		
	}
	return 0;
}
