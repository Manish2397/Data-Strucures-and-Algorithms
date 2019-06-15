#include<bits\stdc++.h>
using namespace std;
struct marks{
	long int a,b;
};
bool cmp(marks x,marks y){
	return x.b < y.b;
}
int main(){
	long int n,r,avg,e;
	long int sum=0,cnt=0;
	cin >> n >> r >> avg;
	marks arr[n] ;
	long int max=n*avg;
	for(int i=0;i<n;i++){
		cin>>arr[i].a;
		cin>>arr[i].b;
		sum+=arr[i].a;
	}
	long int i=0;
	sort(arr,arr+n,cmp);
	while(sum<max && i<n){
		
			e=min(r-arr[i].a,max-sum);
			arr[i].a+=e;
			cnt=arr[i].b+e;
			sum+=e;
			i++;
	}
	cout<<cnt;

	
	
}
