#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

int solve(vector<int> arr,int i,int n){
	
	if(i>=n) return 0;
	else{
		int ans=5000;
		for(int j=1;j<=arr[i];j++){
			int temp=solve(arr,i+j,n);
			ans=min(ans,temp);
		}
		return 1+ans;
	}

}


int main(){
	int n;
	cin>>n;
	vector<int> v;
	int temp;
	for(int i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	cout<<solve(v,0,n);

}

