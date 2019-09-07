#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
 
//https://codeforces.com/contest/1217/problem/A
int main(){
	lld tc,z=0;
	cin>>tc;
	while(tc--){
		double s,i,e,z=0;
		cin>>s>>i>>e;
		if(s+e<i){
			cout<<0<<endl;
		}
		else if(e==0){
			if(s>i){
				cout<<1<<endl;
			}
			else
				cout<<0<<endl;
		}
		else{
			lld ans;
			float temp;
			temp = (i+e-s)/2;
			ans=int(max(z,(i+e-s)/2));
			//cout<<ans<<endl;
			if(temp<0){
				cout<<1+e-ans<<endl;
			}
			else

				cout<<fixed<<setprecision(0)<<e-ans<<endl;
		}
	}
	
}
