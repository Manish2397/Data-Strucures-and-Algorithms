#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;


int main(){
	lld a,b,c;
	cin>>a>>b>>c;
	lld p[4];
	p[0]=a+b+c;
	p[1]=2*a+2*b;
	p[2]=2*a+2*c;
	p[3]=2*b+2*c;
	lld mini=INT_MAX;
	for(int i=0;i<4;i++){
		mini=min(mini,p[i]);
	}
	cout<<mini<<endl;
}
