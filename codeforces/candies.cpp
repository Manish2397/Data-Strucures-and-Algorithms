#include<bits\stdc++.h>
using namespace std;
int sum[1000];
int main(){
	int n,temp,cnt=0;
	cin>>n;
	int flag=0;
	
	for(int i=0;i<2;i++){
		for(int j=0;j<n;j++){
			cin>>temp;
			sum[j]+=temp;
			if(i==1 and sum[j]==0){
				flag=1;
				cnt++;

			}
			if(i==0 and j==0 and temp!=0){
				cout<<"NO";
				return 0;
			}
			if(i==1 and j==n-1 and temp!=0){
				cout<<"NO";
				return 0;
			}
		}
	}
	
	long int max=n-cnt;
	if(flag==0){
		cout<<"NO";
		return 0;
	}
	for(int i=0;i<n;i++){
		temp=n-sum[i];
		if(temp<0 or sum[i]>=n or (sum[i]>max and cnt==n)){
			cout<<"NO";
			return 0;
		}
		else if((temp<0 or sum[i]>=n or sum[i]>=max and cnt!=n)){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES"<<endl;
	for(int i=0;i<n;i++){
		cout<<n-sum[i]<<" ";
	}
	

}