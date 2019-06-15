#include<bits/stdc++.h>
using namespace std;
int main(){
	string s="",t="";
	int len=0;
	cin>>s;
	cin>>t;
	if(s.length()!=t.length()){ cout<<"NO"; return 0;}
	else{
		len=s.length()-1;
		for(int i=0;i<s.length();i++){
			if(s[i]==t[len-i]);
			else{
				cout<<"NO";
				return 0;
			}

		}
	}cout<<"YES";
}