#include<bits\stdc++.h>
using namespace std;
int main(){
	string s;
	long long int max=0,id=0,n;
	cin>>n;
	cin>>s;
	for(long int i=0;i<s.length();i++){
		if(s[i]>=max)
		{ 
			id=i;
			max=s[i];
		}
	}

	for(long int i=0;i<s.length();i++){
		if(i==id) continue;
		else cout<<s[i];
	}
}