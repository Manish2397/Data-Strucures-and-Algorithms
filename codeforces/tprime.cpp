#include <bits\stdc++.h>
using namespace std;
long long int arr[1000001];
int main(){
	long long int n,s;
	long long int temp;
	long long int ans[100001];
	cin>>n;
	

	
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=1000;i++){
		if(arr[i]==0){
			for(int j=2;i*j<=1000000;j++){
				arr[i*j]=1;

			}
		}
	
	}
	
	for(int i=0;i<n;i++){
		cin>>temp;
		s=sqrt(temp);
		if(s*s==temp && arr[s]==0){
			//cout<<"yes";
			ans[i]=1;

		}
		else{ ans[i]=0;
		//cout<<"no";
		}
	}
	for(int i=0;i<n;i++){
		if(ans[i]==1) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
