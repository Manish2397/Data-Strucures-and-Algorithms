#include<bits\stdc++.h>
using namespace std;
int arr[10000];
int main(){
	vector<char> v;
	char temp;
	int n,k;
	//int arr[n];
	cin>>n>>k;
	k=n-k;
	for(int i=0;i<n;i++){
		//arr[i]=0;
		cin>>temp;
		v.push_back(temp);

	}
	int cnt=0,flag=0;
	while(k>0 && cnt<=n){
		if(cnt==n) cnt=0;
		if(flag==0  && v[cnt]=='('){
			//v.erase(v.begin()+cnt);
			if(arr[cnt]==0)
			arr[cnt]=1;

		}
		if(flag==1 && v[cnt]==')'){
			//v.erase(v.begin()+cnt);
			if(arr[cnt]==0)
			arr[cnt]=1;
			//cnt=0;
		}
		cnt++;
		flag=1-flag;
		k--;
	}
	for(int i=0;i<n;i++){
		if(arr[i]==0)
			cout<<v[i];
	}
}