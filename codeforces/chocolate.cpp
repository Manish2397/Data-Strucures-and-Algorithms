#include<bits\stdc++.h>
using namespace std;
int main(){
	long long t,s,a,b,c,choco,choco2,ans;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>s>>a>>b>>c;
		choco=s/c;
		choco2=choco/a;
		ans=choco+choco2*b;
		cout<<ans<<"\n";
	}
}