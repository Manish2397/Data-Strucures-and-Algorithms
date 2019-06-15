#include<bits\stdc++.h>
using namespace std;
int main(){
	long long int tc,flag=0;
	string s;
	cin>>tc;
	for(long long int i=0;i<tc;i++){
		cin>>s;
		flag=0;
		for(int j=0;j<s.length()-1;j++){
			if(s[j]==s[j+1]){
				continue;
			}
			else{ flag=1;
				break;}
		}
		if(flag==0) cout<<-1<<endl;
		else{ sort(s.begin(),s.end());
		cout<<s<<endl;}
	}
}