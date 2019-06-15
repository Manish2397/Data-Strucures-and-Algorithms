#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,temp,e=0,o=0,sume=0,sumo=0;
	cin>>n;
	int ceven[100];
	int codd[100];
	for(int i=0;i<n;i++){
		cin>>temp;
		if(temp%2==0){
			ceven[e]=temp;
			e++;
			sume+=temp;
		}
		else{
			codd[o]=temp;
			o++;
		}

	}
	sort(codd, codd+o, greater<int>());
	if(o%2==0 && o!=0) o-=1;
	for(int i=0;i<o;i++){
		sumo+=codd[i];
	}
	if(o==0){
		cout<<0;
		return 0;
	}
	cout<<sume+sumo;
}