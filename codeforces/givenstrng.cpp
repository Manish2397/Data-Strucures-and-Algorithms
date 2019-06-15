#include<bits\stdc++.h>
using namespace std;
int main(){
	int n,k,d,r,rmin,cnt=0;
	cin>>n>>k;
	d=k/9;
	r=k%9;
	vector<int> vmax,vmin;
	if(k<n or d==0){
		cout<<-1<<" "<<-1;
	}
	else{
		for(int i=0;i<n;i++){
			if(i<d){
				cout<<9;
			}
			if(i==d) cout<<r;
			if(i>d) cout<<0;

		}
		if(d+1<n){
			int n2=k-1;
			d=n2/9;
			rmin=n2%9;
			for(int i=0;i<n;i++){
				if(i==0 and cnt==0) cout<<1;
				if(i>0 and i<n-d-1 and cnt!=0) cout<<0;
				if(i==n-d-1 and cnt!=0) cout<<rmin;
				if(i>n-d-1 and cnt!=0) cout<<9;
				cnt++;
			}
		}
	}
}

