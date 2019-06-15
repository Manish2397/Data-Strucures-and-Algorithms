#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n,a,b,cost=0;
	 int s[22];
	 cin>>n>>a>>b;
	 //cin.getline(s,(2*n-1));
	 //getline(cin,s);
	 for(int j=0;j<n;j++){
	 	cin>>s[j];
	 }
	 int min=a<b?a:b;

	 int max=a>b?a:b;

	 int l=n;
	 for(int i=0;i<n;i=i++){
	 	if(s[i]==s[l-1-i]){
	 		if(s[i]==2){
	 			cost+=(2*min);

	 			continue;
	 		}
	 	}
	 	else if((s[i]!=s[l-1-i])&&((s[i]==2)||(s[l-1-i]==2))){
	 		if(s[i]==2){
	 			if(s[l-1-i]==0) cost+=a;
	 			if(s[l-1-i]==1) cost+=b;
	 		}
	 		else if(s[l-1-i]==2){
	 			if(s[i]==0) cost+=a;
	 			else cost+=b;	
	 		}
	 	}
	 	else{
	 		cout<<-1;
	 		return 0;
	 		
	 	}

	 }
	 if(n%2!=0){
	 	int mid=n/2+1;
	 	if(s[mid]==2) cost+=min;
	 } 
	 cout<<cost;}