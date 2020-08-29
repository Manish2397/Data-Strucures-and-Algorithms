#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

bool isPalind(string s){
	int i=0;
	int sz=s.length()-1;
	while(i<sz){
		if(s[i]!=s[sz]){
			return false;
		}
		i++;
		sz--;
	}
	return true;
}

void solve(string s,string ans){
	int sz=s.size();
	if(sz==0){
		cout<<ans<<endl;
		return;
	}
	for(int i=1;i<=sz;i++){
		string st = s.substr(0,i);
		string res = s.substr(i);
		if(isPalind(st)){
			solve(res,ans+"("+st+")");
		}
	}
}

int main(){
	string s="abaaba";
	//cout<<s.substr(5);
	solve(s,"");


}

