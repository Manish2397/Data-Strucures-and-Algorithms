#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


//https://leetcode.com/problems/minimum-falling-path-sum/


int f(int depth,int i,int sum,int arr[][3]){
	if(i<0 or i>2) return INT_MAX;
	if(depth==2) return arr[depth][i];
	else{
		sum+=arr[depth][i]+min(min(f(depth+1,i-1,sum,arr),f(depth+1,i,sum,arr)),f(depth+1,i+1,sum,arr));
		return sum;
	}
}

int main(){
	int arr[][3] = {{1,2,3},
				   {4,5,6},
				   {15,8,9}
				  };
	int size=3;
	int maxi=INT_MAX;
	for(int cnt=0;cnt<3;cnt++){
		int temp=f(0,cnt,0,arr);
		maxi=min(maxi,temp);
		cnt++;
	}
	cout<<maxi<<endl;
	return 0;
	
}