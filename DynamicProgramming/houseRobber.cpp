#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

lld maxChori(lld arr[],lld n){
	if(n==1) return arr[0];
	if(n==2) return max(arr[0],arr[1]);
	else return max(arr[0] + maxChori(arr+2,n-2),maxChori(arr+1,n-1));
}

int main(){
	lld money[]={3,5,7,2,9,6,1,9,0,4};
	lld size=10;
	lld ans = maxChori(money,size);
	cout<<ans<<endl;
	
}