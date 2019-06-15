#include<bits\stdc++.h>
using namespace std;
long long int prime[100000000];
int main(){
	long long int n,cnt=0;
	cin>>n;

	for(int i=2;i<=sqrt(n);i++){
		if(prime[i]==0){
			for(int j=2;i*j<=n;j++){
				prime[i*j]=1;

			}
		}
	}
	start:
	for(long long int i=2;i<=n;i++){
		if(prime[i]==0 and n%i==0){
			n=n-i;
			cnt++;
			if(n==0){
				cout<<cnt;
				return 0;
			}
			goto start;
		}
	}

}
