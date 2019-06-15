#include<bits/stdc++.h>
using namespace std;
int main(){
	float n,k,temp,max=0,m;
	vector<float> v,v2;
	cin>>n>>k;
	float cnt=n;
	m=k;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	while(cnt){
		for(int i=0;i<=n-m;i++){
			for(int j=0;j<m;j++){
				max+=v[i+j];
				
				
			}
			max=max/m;
			v2.push_back(max);
			max=0.0;

		}m=m+1.0;
		cnt--;
	}
float maxt=*max_element(v2.begin(),v2.end());
cout<<std::setprecision(5)<<maxt;
}