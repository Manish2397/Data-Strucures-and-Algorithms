#include<bits\stdc++.h>
using namespace std;
int arr[100000];
int main(){
	int n;
	cin>>n;
	arr[0]=1;
	arr[1]=1;
	for(int i=2;i<=sqrt(n);i++){
		if(arr[i]==0){
			for(int j=2;i*j<=n;j++){
				arr[i*j]=1;

			}
		}
	
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]==1) cout<<i<<"-NO"<<endl;
		else cout<<i<<"-yes"<<endl;
	}

}
