#include<bits\stdc++.h>
#define lld long long int 
#define dl double 
#define d int
#define ld long int
#define f float
#define str string
using namespace std;
int main(){
	lld n,temp,a,b,c;
	vector<lld> v;
	cin>>n;
	for(lld i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	a=v[n-1];
	c=n-2;
	while(true){
		if(a%v[c]==0){
			c--;
			continue;
		}
		else{
			b=v[c];
			break;
		}


	}
	cout<<a<<" "<<b;

}