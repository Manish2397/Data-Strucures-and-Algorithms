#include<bits\stdc++.h>
using namespace std;
int main(){
	long long t,n,c,j=0,sum=0,cnt=0;
	cin>>t;
	for(int i=0;i<t;i++){
		j=0,sum=0,cnt=0;
		cin>>n>>c;
		while(sum<=c){
			j++;
			sum+=j;
			if(sum<=c)
			cnt++;
		}
		if(n-cnt<0) cout<<0<<endl;
		else
		cout<<n-cnt<<endl;;
	}

}