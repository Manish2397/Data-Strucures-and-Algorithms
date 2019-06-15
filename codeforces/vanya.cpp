#include<bits\stdc++.h>
using namespace std;
int main(){

	int n;
	long int sum=0;
	int i=1;
	cin>>n;
	while(sum<=n){
		if(sum+i*(i+1)/2>n) break;
		else sum+=i*(i+1)/2>n;
		i++;
	}
cout<<--i;
}