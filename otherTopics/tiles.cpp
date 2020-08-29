#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
int arr[1000];
int solve(int n){
	if(n==1) return 1;
	if(n==2) return 2;
	if(arr[n]!=0) return arr[n];
	else return arr[n]=solve(n-1) + solve(n-2);


}


int main(){
	int n;
	cin>>n;
	cout<<solve(n);

}

