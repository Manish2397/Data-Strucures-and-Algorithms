#include<bits\stdc++.h>
using namespace std;
int main(){
	long long t,L,v,l,r,ans=0,lan1=0,lan2=0,p;
	cin>>t;
	for(int i=0;i<t;i++){
		//ans=0;
		cin>>L>>v>>l>>r;
		lan1=L/v;
		if(l==r){
			if(l%v==0) lan2=1;
		}
		if(l%v!=0){
			p=v-l%v;
			if (l+p>r) lan2=0;
			else if(l+p==r){
				lan2=1;
			}
		
			else{
				l=l+p;
				lan2=((r/v)*v-(l/v)*v)/v+1;
			}
		}
		if(l%v==0){
			lan2=((r/v)*v-(l/v)*v)/v+1;
		}
		ans=lan1-lan2;
		cout<<ans<<endl;
	}
}