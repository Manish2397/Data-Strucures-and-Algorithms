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
		lld n,cnta=0,cntb=0;
		string a,b;
		cin>>n>>a>>b;
		for(lld i=0;i<n;i++){
			if(a[i]=='1') cnta++;
			if(b[i]=='1') cntb++;
		}
		if(cnta==cntb) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;

	}
}

