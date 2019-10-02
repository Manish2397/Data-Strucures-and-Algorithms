#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
vector<string> ans;

bool canAppend(char c,int sum , int i){
	if(c=='('){
		if(i>0 and (sum+1)>=0) return 1;
		else return 0;
	}
	if(c==')'){
		if(i>0 and (sum-1)>=0) return 1;
		else return 0;
	}
}

void solve(int sum,int l,int r,string s){
	if(l==0 and r==0 ){
		// cout<<l<<" "<<r<<endl;
		ans.pb(s);
		//cout<<s<<endl;
		return;
	}

	if(canAppend('(',sum,l)){
		s.pb('(');
		solve(sum+1,l-1,r,s);
		s.pop_back();
	}
	if(canAppend(')',sum,r)){
		s.pb(')');
		solve(sum-1,l,r-1,s);
		s.pop_back();
	}
}

int main(){
	int n;
	cin>>n;
	string s="";
	solve(0,n,n,s);
	for(auto x:ans){
		cout<<x<<endl;
	}

}
