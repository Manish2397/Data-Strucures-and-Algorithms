#include<bits\stdc++.h>
#define lld long long int
#define dl double
#define d int
#define ld long int
#define f float
#define str string
using namespace std;
int main(){
	lld tc,l1,r1,l2,r2,temp;
	cin>>tc;
	for(lld i=0;i<tc;i++){
		cin>>l1>>r1>>l2>>r2;
		temp=l1 == l2 ? r2:l2;
		cout<<l1<<" "<<temp<<endl;
	}

}
