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
		lld n;
		cin>>n;
		lld *c= new lld[n+1];
		lld *h= new lld[n+1];
		h[0]=INT_MIN;
		for(lld i=1;i<=n;i++){
			cin>>c[i];
		}
		for(lld i=1;i<=n;i++){
			cin>>h[i];
		}
		lld *m= new lld[n+1]{0};
		m[0]=0;
		for(lld i=1;i<=n;i++){
			lld l,r;
			if(i-c[i]<=1) l=1;
			else l=i-c[i];
			if(i+c[i]>=n) r=n;
			else r=i+c[i];
			m[l]+=1;
			m[r+1]-=1;
		}

		for(lld i=2;i<=n;i++){
			m[i]+=m[i-1];
		}
		sort(h,h+n+1);
		sort(m,m+n+1);
		for(int i=0;i<n+1;i++){
			cout<<h[i]<<" "<<m[i]<<endl;
		}
		lld ind=1;
		for(int x=1;x<=n;x++){
			if(m[x]==h[x]){
				ind++;
				continue;
			}
			else {
				cout<<"NO"<<endl;
				break;
			}
		}
		if(ind==n+1){
			cout<<"YES"<<endl;
		}
	}
}

