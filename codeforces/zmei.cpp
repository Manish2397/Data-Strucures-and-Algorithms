#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/contest/1217/problem/B 
bool cmp(pair<lld,lld> a,pair<lld,lld> b){
	return (a.first-a.second)>(b.first-b.second);
} 

int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld num,temp1,temp2,power,maxp=0,cnt=0;
		vector<pair<lld,lld> > v;
		cin>>num>>power;
		for(lld i=0;i<num;i++){
			cin>>temp1>>temp2;
			maxp=max(maxp,temp1);
			v.push_back({temp1,temp2});
		}
		sort(v.begin(),v.end(),cmp);
		if((v[0].first-v[0].second) < 0 and power>maxp){
			cout<<-1<<endl;
		}
		else if((v[0].first-v[0].second) < 0 and power<=maxp){
			cout<<1<<endl;
		}
		else if(maxp>=power){
			cout<<1<<endl;
		}
		else{
			power-=maxp;
			double dest = v[0].first-v[0].second;
			if(dest==0){
				cout<<-1<<endl;
			}
			else{
			cnt = ceil(power/dest);
			// while(power>maxp){
			// power-=(v[0].first-v[0].second);
			// cnt++;
			// }
			cout<<++cnt<<endl;}
		}
	}
}
