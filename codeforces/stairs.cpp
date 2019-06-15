#include<bits\stdc++.h>
using namespace std;
int main(){
	long int x,y,z,t1,t2,t3,stairs,elevator;
	cin>>x>>y>>z>>t1>>t2>>t3;
	stairs=abs((y-x)*t1);
	elevator=abs(z-x)*t2+t3+abs(y-x)*t2+t3+t3;
	//cout<<stairs;
	//cout<<elevator;
	if(elevator>stairs) cout<<"NO";
	else cout<<"YES";
}