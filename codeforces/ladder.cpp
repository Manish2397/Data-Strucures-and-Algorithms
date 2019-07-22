#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


lld solve(lld n,vector<lld> v){
	sort(v.rbegin(),v.rend());
	lld base1=v[0];
	lld base2=v[1];
	lld basemin = min(base1,base2);
	if((n-2)>=basemin){
		return basemin-1;
	}
	else return n-2;

}

int main(){
	lld tc,temp,n;
	cin>>tc;
	while(tc--){
		vector<lld> v;
		cin>>n;
		for(lld i=0;i<n;i++){
			cin>>temp;
			v.push_back(temp);	
		}
		cout<<solve(n,v)<<endl;
	}
}
