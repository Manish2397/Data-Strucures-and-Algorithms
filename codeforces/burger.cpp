#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/contest/1207/problem/A

int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int b,p,f,h,c,ans=0;
		cin>>b>>p>>f>>h>>c;
		if(h>=c){
			int bun=2*p;
			if(bun<b){
				ans+=p*h;
				b-=bun;
				ans+=(f>b/2)?(b/2)*c:f*c;
			}
			else{
				ans+=h*(b/2);
			}
		}
		else{
			int bun=2*f;
			if(bun<b){
				ans+=f*c;
				b-=bun;
				ans+=(p>b/2)?(b/2)*h:p*h;
			}
			else{
				ans+=c*(b/2);
			}
		}
		cout<<ans<<endl;
	}
}
