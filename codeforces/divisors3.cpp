#include<bits\stdc++.h>
#define lld long long int 
#define dl double 
#define d int
#define ld long int
#define f float
#define str string
using namespace std;
int main(){
	lld n,temp,a,b=1,c;
	vector<lld> v;
	cin>>n;
	for(lld i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	a=v[n-1];
	
	/*for(lld i:v){
		cout<<i<<endl;
	}*/
	n=n-2;
	while(n){
		if(a%v[n]==0 and (v[n]==v[n-1] or v[n]==v[n+1])){
			b=v[n];
			break;
		}
		
		else if(a%v[n]!=0){
			b=v[n];
			break;
		}
		else if(a%v[n]==0 and (v[n]!=v[n-1] or v[n]!=v[n+1])){
			n--;
			continue;
		}
		
	}
	cout<<a<<" "<<b;

}