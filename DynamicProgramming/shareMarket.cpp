//Similar Question - -- -  https://leetcode.com/problems/best-time-to-buy-and-sell-stock/


#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;
lld maxi=0;
lld ans = 0;
lld maxProfit(lld arr[],lld n){
	if(n==1){
		maxi = arr[0];
		return maxi;
	}
	else{
		lld temp = maxProfit(arr+1,n-1);
		maxi = max(temp,arr[0]);
		ans = max(ans,maxi-arr[0]);
		return maxi;

	}
}

int main(){
	lld arr[]={4,5,11,10,7,6,11,1},size = 8,profit;
	profit = maxProfit(arr,size);
	cout<<ans<<endl; 
	
}