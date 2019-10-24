#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/contest/1251/problem/a
int main(){
	lld n;
	cin>>n;
	for(lld i=0;i<n;i++){
		string temp;
		cin>>temp;
		map<char,lld> m;
		map<char,lld> m2;
		map<char,lld> ans;
		m[temp[0]]++;
		m2[temp[0]]++;
		for(lld j=1;j<temp.length();j++){
			if(temp[j]==temp[j-1]){
				m[temp[j]]++;
				m2[temp[j]]++;
			}
			else{
				m[temp[j]]=1;
				m2[temp[j]]++;
			}
			if(temp[j]!=temp[j-1]){
				if(m[temp[j-1]]%2!=0){
					ans[temp[j-1]]=1;
				}
			}
			
		}
		for(auto x:m){
			if(x.second%2!=0 or m2[x.first]%2!=0 or ans[x.first]==1){
				cout<<x.first;
			}
		}
		cout<<endl;
	}
}
