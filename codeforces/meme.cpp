#include<bits\stdc++.h>
using namespace std;
int main(){
	long double d,x,y,D,t;
	cin>>t;
	for(int i=0;i<t;i++){

	cin>>d;
	/*if(d==1){
		cout<<"N"<<endl;
		continue;
	}*/
	D=d*d-4*d;
	if(D<0) D=D;
	else{
	D=sqrt(d*d-4*d);}
	if(D>d or D<0){
		cout<<"N"<<endl;
		
	}
	else{
		x=(d+D)/2.0;
		y=(d-D)/2.0;
		std::cout << std::setprecision(9) << std::fixed;
		cout<<"Y"<<" "<<x<<" "<<y<<endl;
	}}
}