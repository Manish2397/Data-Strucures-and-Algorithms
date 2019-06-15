#include<bits\stdc++.h>
using namespace std;
int main(){
	long int n,temp,maxi=0,i;
	vector<long int> v,ans;
	cin>>n;
	
	for(i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	maxi=v[n-1];
	for(i=n-1;i>=0;i--){
		
		temp=maxi-v[i]+1;
		if(i==n-1){ ans.push_back(0);
			}
		else if(temp<0) ans.push_back(0);
		else ans.push_back(temp);
		if(v[i]>maxi) maxi=v[i];
	}
	
	for(i=n-1;i>=0;i--){
		//cout<<"yes";
		cout<<ans[i]<<" ";
	}

}