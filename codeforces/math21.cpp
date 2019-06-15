#include<bits/stdc++.h>
using namespace std;
int cnt=0,num,temp,temp2;

int mini(int num){
	int flag=0;
	if((int)sqrt(num)*(int)sqrt(num)==num){
		num=sqrt(num);
		cnt++;
		return mini(num);
	}
	else{
		temp=pow(1,2);
		for(int i=2;i<num;i--){
			temp2=pow(i,2);
			if((temp%num)==0){
				flag=1;
				temp=max(temp,temp2);
				
			}
			
		}
		if(flag==1){
			cnt++;
			num=temp;
			return mini(num);
		}
		else return num;
		
		
	}

}
int main(){
	
	cin>>num;
	int ans=mini(num);
	cout<<ans<<" "<<cnt;

}