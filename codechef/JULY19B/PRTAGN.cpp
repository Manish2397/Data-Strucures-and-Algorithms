#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;




int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld q;
		map<lld,lld> m;
		cin>>q;
		while(q--){
			lld o=0,e=0,x;
			cin>>x;

			for(auto i:m ){
				if(i.first!=x){
					lld temp=i.first^x;
					lld cnt = __builtin_popcount(temp);
					// if(cnt%2==0) e++;
					// else o++;
					m[temp]=cnt;
				}
			}
			m[x]=__builtin_popcount(x);
			// if(m[x]%2==0) e++;
			// else o++;
			
			for(auto i:m ){
				if(i.second%2==0) e++;
				else o++;
			}
			cout<<e<<" "<<o<<endl;
		}

	}
	return 0;
}