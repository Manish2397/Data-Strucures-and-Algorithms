#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

string solve(string &s,lld l,lld r){
	if(l==r){
		if(s[l]=='0'){
			return "LOSE";
		}
		else return "WIN";
	}
	
	else{
		if(s[l]=='1'){
			s[l+1]=( s[l+1]=='1'?'0':'1');
			return solve(s,l+1,r);
		}
		else{
			return solve(s,l+1,r);
		}
	}
}
int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		string s;
		lld l=-1,r=-1;
		cin>>s;
		for(lld i=0;i<s.length();i++){
			if(l==-1 and s[i]=='1'){
				l=i;
			}
			if(s[i]=='1'){
				r=i;
			}
		}
		if(l==r and l!=-1){
			cout<<"WIN"<<endl;
		}
		else if(l==-1 and r==-1){
			cout<<"LOSE"<<endl;
		}
		else{
			// cout<<l<<""<<r<<endl;
			cout<<solve(s,l,r)<<endl;
		}

		
	}
	
}

