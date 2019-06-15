#include<bits/stdc++.h>
using namespace std;
int main(){
	double n,max1=0,max2=0,max3=0,temp,l;
	vector<long long> v;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	max1=v[0];
	//cout<<v[n-1];
	max3=l-v[n-1];
	for(int i=0;i<n-1;i++){
		temp=v[i+1]-v[i];
		//cout<<temp<<endl;
		if(temp>max2) max2=temp;
	}
	//cout<<max2<<endl;
	max2=(max2)/2;
	double ans=max(max(max1,max3),max2);
	std::cout << std::setprecision(9) << std::showpoint << std::fixed;
  	std::cout << ans << std::endl;

}