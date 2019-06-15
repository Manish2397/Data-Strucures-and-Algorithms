#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;
int main(){
	lld n,arr[110],first,second;
	cin>>n;
	for(int i=2;i<=sqrt(n);i++){
		if(arr[i]==0){
			for(int j=2;i*j<=n;j++){
				arr[i*j]=1;

			}
		}
	}
	first = 4;
	while(true){
		if(arr[n-first]==1 and arr[first]==1){
			cout<<first<<" "<<n-first;
			return 0; 
		}
		else first++;
	}
	
}