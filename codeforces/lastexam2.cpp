#include<bits\stdc++.h>
#define lld long long int
#define dl double
using namespace std;
lld gcd(lld a,lld b){
	if(b==0) return a;
	else return gcd(b,a%b);
}
int main(){
	/*lld n,temp;
	cin>>n;
	lld arr[n+1];
	arr[0]=0;
	for(lld i=1;i<=n/2;i++){
		cin>>temp;
		arr[i]=arr[i-1];
		arr[n-i+1]=temp-arr[i];
		if(i>1 and arr[n-i+1]>arr[n-i+2]){

			arr[i]+=arr[n-i+1]-arr[n-i+2];
			arr[n-i+1]=arr[n-i+2];
		}
	}
	for(lld i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
*/cout<<8*64/gcd(8,64);
}
