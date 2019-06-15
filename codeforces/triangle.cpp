#include<bits\stdc++.h>
using namespace std;
int main(){
	long int arr[3],ans;
	cin>>arr[0]>>arr[1]>>arr[2];
	sort(arr,arr+3);
	ans=arr[2]-arr[1]-arr[0]+1;
	if(ans<0) cout<<0;
	else cout<<ans;

}