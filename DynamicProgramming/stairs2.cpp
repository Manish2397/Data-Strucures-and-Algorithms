#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

lld minCost(lld arr[],lld n){
	if(n==1 or n==2) return arr[0];
	else{
		return arr[0]+min(minCost(arr+1,n-1),minCost(arr+2,n-2));
	}
}


int main(){
	lld cost[]={5,6,4,8,2,1,12,1};
	lld len=8;
	lld ans= minCost(cost,len);
	cout<<ans<<endl;
	
}