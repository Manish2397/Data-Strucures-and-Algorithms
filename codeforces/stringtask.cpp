#include<bits/stdc++.h>
using namespace std;
int main(){
	int cnt=0;
	string s;
	char s2[1000];
	cin>>s;
	transform(s.begin(), s.end(), s.begin(), ::tolower);
	int j=0;
	
	for(int i=0;i<s.length();i++){
		
		
		if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U'||s[i]=='y'||s[i]=='Y'){
			cnt++;
			continue;
		}
		else{
			s2[j]='.';
			j++;
			s2[j]=s[i];
				
			j++;
		}
			
			       
		
	}
	int l=2*(s.length()-cnt);
	for(int i=0;i<l;i++){
		cout<<s2[i];}

}