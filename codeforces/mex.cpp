#include<bits\stdc++.h>
using namespace std;
int main(){
	long int n,max=-1,temp;
	cin>>n;
	for (long int i = 0; i < n;i++)
	{	cin>>temp;
		if((temp-max)==0 or (temp-max)==1){
			max=temp;

		}
		else if(temp<max) continue;
		else{
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;



}