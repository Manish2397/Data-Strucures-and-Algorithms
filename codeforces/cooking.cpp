#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k,a;
	cin>>n>>k;
	if(k==0) a=k;
	else {
	 a=k+1;
	}
	if(k>n){
		cout<<1<<1;
		return 0;
	}
	else{
		
		if((n%(2*k+1)>k)){
			
			int num=(n-a)/(2*k+1)+1;
			cout<<num<<endl;
			for(int i=1;i<=num;i++){
				cout<<a+(i-1)*(2*k+1)<<" ";
			}
		}
		else{
			a=a-n%(2*k+1)+1;
			//cout<<a;
			int num=(n-a)/(2*k+1)+1;
			cout<<num<<endl;
			for(int i=1;i<=num;i++){
				cout<<a+(i-1)*(2*k+1)<<" ";
			}
		}
	}
}