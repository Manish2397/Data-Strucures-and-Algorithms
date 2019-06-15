#include<bits/stdc++.h>
using namespace std;
int main(){
	long int n,cnt=0,skp;
	string a,b;
	cin>>n;
	cin>>a;
	cin>>b;
	for(int i=0;i<n;i++){
		if(i==skp) continue;
		if((a[i])!=b[i]&&(a[i+1]!=b[i+1])&&(a[i]!=a[i+1])){
			cnt++;
			skp=i+1;
			continue;
		}
		//if((a[i])!=b[i]&&(a[i-1]!=b[i-1])&&(a[i]!=a[i-1])) continue;
		if(a[i]!=b[i]){
			cnt++;
		}
	}
cout<<cnt;
}