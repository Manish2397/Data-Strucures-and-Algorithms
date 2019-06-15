#include <bits/stdc++.h>

using namespace std;
int main(){
	long int n,cnt,temp;
	cin>>n;
	long int arr[n];
	long int ans[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cnt=0;
		while(arr[i]){
			temp=arr[i]%2;
			arr[i]=arr[i]/2;
			if(temp==1) cnt++;

		}
		ans[i]=cnt;	
	}
	for(int i=0;i<n;i++){
		cout<<(long long)pow(2,ans[i])<<endl;
	}
}