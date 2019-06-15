#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,m;
	string key;
	cin>>n>>m;
	string sn[n][2];
	string sm[m][2];
	for(int i=0;i<n;i++){
		cin>>sn[i][0];
		cin>>sn[i][1];
	}
	for(int i=0;i<m;i++){
		cin>>sm[i][0];
		cin>>sm[i][1];
	}
	for(int i=0;i<m;i++){
		key=sm[i][1].substr(0,sm[i][1].length()-1);
		for(int j=0;j<n;j++){
			if(key==sn[j][1]){
				cout<<sm[j]<<'#'<<sn[j][0];
			}
		}		
	}
}