#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld n,temp,ans=0;
		cin>>n;
		lld *p = new lld[n];
		lld *f = new lld[n];
		for(lld i=0;i<n;i++){
			cin>>temp;
			p[i] = temp*20;
		}
		for(lld i=0;i<n;i++){
			cin>>temp;
			ans = max(ans,p[i]-temp*10);
		}
		cout<<ans<<endl;
	}
}

