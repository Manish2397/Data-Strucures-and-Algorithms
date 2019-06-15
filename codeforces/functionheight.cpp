#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,k;
	cin>>n>>k;
	if(k/n==0){
		cout<<1;
		return 0;
	}
	if(k%n==0){
		cout<<k/n;
		return 0;
	}
	else{
		cout<<k/n+1;

	}
}