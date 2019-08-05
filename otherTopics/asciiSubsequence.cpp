#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
void subsequence(vector<string> &v,string s,int ind){
	if(ind>=s.length()) return;
	int sz = v.size();
	for(int i=0;i<sz;i++){
		v.pb(v[i]+s[ind]);
		v.pb(v[i]+to_string((int)(s[ind])));
	}
	subsequence(v,s,ind+1);
}

int main(){
	string s;
	cin>>s;
	vector<string> v;
	v.pb("");
	subsequence(v,s,0);
	for(auto x:v){
		cout<<x<<endl;
	}
	
}