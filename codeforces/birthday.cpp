#include<bits\stdc++.h>
using namespace std;
int main(){
	long long int n,m,k,l,c=0;
	cin>>n>>m>>k>>l;
	c=n/m;
	if(c==0){
		cout<<-1;
		return 0;
	}
	else{
		long long int g=c*m-k;
		if(g<l){
			cout<<-1;
			return 0;
		}
	}
	cout<<c;
}