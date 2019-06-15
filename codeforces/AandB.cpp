#include<bits\stdc++.h>
using namespace std;
int main(){
	vector<long int> v,v2;
	long int n,temp,x;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	for(int i=0;i<n-1;i++){
		cin>>temp;
		v.push_back(temp);
		v2.push_back(temp);
	}
	sort(v.begin(),v.end());
	for(long int i=1;i<2*n-2;i++){
		if(v[i]!=v[i-1] && v[i]!=v[i+1]){
		 cout<<v[i]<<endl;
		 //x=i;
		 //v.erase(v.begin()+i);
		}
	}
	for(int i=0;i<n-2;i++){
		cin>>temp;
		v2.push_back(temp);
	}
	sort(v2.begin(),v2.end());
	for(long int i=1;i<2*n-3;i++){
		//if(v[i]==8) continue;
		if(v2[i]!=v2[i-1] && v2[i]!=v2[i+1]){
			cout<<v2[i]<<endl;
		 	//v.erase(i);
		}
	}	
}