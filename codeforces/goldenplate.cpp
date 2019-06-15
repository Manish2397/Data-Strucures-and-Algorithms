#include<bits\stdc++.h>
using namespace std;
int main(){
	long long int w,h,k,w1,h1,g,sum=0;
	cin>>w>>h>>k;
	for(long long int i=1;i<=k;i++){
		w1=w-4*(i-1);
		h1=h-4*(i-1);
		h1=h1-2;
		g=2*w1+2*h1;
		sum=sum+g;
	}
	cout<<sum;
}