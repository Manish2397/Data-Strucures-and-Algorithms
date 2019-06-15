#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	string s;
	cin>>n>>k;
	cin>>s;
	int pos=0;
	int cnt=n-k;
	vector<int> v;
	if(n==k){
		cout<<s;
		return 0;
	}

	for(int i=0;i<n;i++){
		v.push_back(s[i]);
	}
	vector<int>::iterator
	int j=0;
	for(j;j<n;j++){
		if(cnt==0) break;
		if((v[j]=='(')&&(v[j+1]==')')){
			v.erase(j,j+1);
			//v.erase(j+1);
			cnt-=2;
		}
		if(j==n-1) j=0;
	}
	for(int m=0;m<k;m++){
		cout<<v[m];
	}

	}
