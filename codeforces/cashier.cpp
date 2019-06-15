#include<bits\stdc++.h>
using namespace std;
struct people{
	long int t,d;
};
int main(){
	long int n,l,a,cnt=0,curr=0,prev=0,s;
	cin>>n>>l>>a;
	people arr[n];
	for(long int i=0;i<n;i++){
		//prev=curr;
		cin>>arr[i].t>>arr[i].d;

	}
	//sort(arr,arr+n);
	for(long int i=0;i<n;i++){
		if(i==0 ){
			if(arr[i].t>=a)
			cnt=cnt+arr[i].t/a;
		}
		else{
			prev=arr[i-1].t;
			curr=arr[i].t;
			s=curr-prev-arr[i-1].d;
			cnt+=s/a;
		}
	}
	cnt=cnt+(l-(curr+arr[n-1].d))/a;
	cout<<cnt;
	

}