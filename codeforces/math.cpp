#include<bits/stdc++.h>
using namespace std;
int cnt=0,num,temp;

int mini(int num){
	if((int)sqrt(num)*(int)sqrt(num)==num){
		num=sqrt(num);
		cnt++;
		return mini(num);
	}
	else{
		for(int i=2;i<num;i++){
			temp=pow(i,2);
			if((temp%num)==0){
				break;
			}

		}
		if((temp%num)==0){

				num=temp;
				cnt++;
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
