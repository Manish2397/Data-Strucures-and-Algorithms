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
		lld n,k;
		cin>>n>>k;
		lld apples = n/k;
		if(apples%k==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
}

