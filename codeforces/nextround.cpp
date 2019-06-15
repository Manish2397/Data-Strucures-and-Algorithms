#include<bits\stdc++.h>
using namespace std;
int main(){
	int n,k,temp;
	cin>>n>>k;
	int cnt=0;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
		if(v[i]>0 && i<k){
			cnt++;
		}
		else{
			if(v[i]==v[k-1] && v[i]!=0) cnt++;
		}
	}
	cout<<cnt;

}