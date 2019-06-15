#include<bits\stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int temp=-1;
	int maxi=0;
	for(int i=1;i<n;i++){
		if(arr[i]-arr[i-1]==1) temp++;
		else maxi=max(temp,maxi);
	}
	maxi=max(temp,maxi);
	cout<<maxi;
}