#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,s,cnt=0;
	long long int ele;
	vector<long long int> v;
	cin>>n>>s;
	for(long long int i=0;i<n;i++){
		cin>>ele;
		v.push_back(ele);
	}
	sort(v.begin(),v.end());
	long long int mid=v.size()/2;
	if(v[mid]<s){
		for(long long int j=mid;j<n;j++){
			if((v[j])>=s) break;
			cnt+=s-v[j];
		}

	}
	if(v[mid]>s){
		for(long long int j=mid;j>=0;j--){
			if((v[j])<=s) break;
			cnt+=v[j]-s;
		}

	}
	cout<<cnt;

}