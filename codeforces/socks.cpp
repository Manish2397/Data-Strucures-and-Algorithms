#include<bits\stdc++.h>
using namespace std;
int main(){
	int a,b,x,y;
	cin>>a>>b;
	y=abs(a-b)/2;
	x=min(a,b);
	cout<<x<<" "<<y;
}