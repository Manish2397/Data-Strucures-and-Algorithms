#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/contest/599/problem/C
int main(){
	lld n,temp;
	cin>>n;
	vector<lld> v1,v2;
	for(int i=0;i<n;i++){
		cin>>temp;
		v1.pb(temp);
		v2.pb(temp);
	}
	sort(v1.begin(),v1.end());
	map<lld,lld> m1,m2;
	int flag=0,flag2=0;
	lld ans=0;
	for(int i=0;i<n;i++){
		flag=0,flag2=0;
		m1[v1[i]]++;
		m2[v2[i]]++;
		if(m2.count(v1[i]) and m1.count(v2[i]) and m2[v1[i]]==m1[v1[i]] and m2[v2[i]]==m1[v2[i]]){
			flag2=1;
			for(auto x:m1){
				if(m2.count(x.first) and m2[x.first]==x.second){
					//cout<<"hello"<<i<<endl;
					continue;
				}
				else{

					flag=1;
					break;
				}
			}
		}
		if(flag==1){
			continue;
		}
		else if(flag2==0 and flag==0){
			//cout<<m1[1]<<m2[1]<<m1[2]<<m2[2]<<endl;
			//cout<<"--"<<i<<endl;
			continue;
		}
		else if(flag2==1 and flag==0){
			if(m1.size()==m2.size()){
				//cout<<m1[1];
				//cout<<m1.size();
				ans++;
				m1.clear();
				m2.clear();
				//cout<<m1[5];
			}
			else{
				continue;
			}
		}
	}
	cout<<ans<<endl;
}
