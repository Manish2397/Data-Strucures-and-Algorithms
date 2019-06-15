#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[100000],cnt1=0,cnt2=0,cnt3=0,cnt4=0,ans=0,t1=0,t11=0,t3=0,t33=0,t2=0,n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
		if(a[i]==1)
			cnt1++;
		if(a[i]==2)
			cnt2++;
		if(a[i]==3)
			cnt3++;
		if(a[i]==4)
			cnt4++;}


	ans=cnt4;
	ans+=min(cnt1,cnt3);
	if(cnt3>cnt1){
		t3=cnt3-cnt1;
	}
	if(cnt1>cnt3){
		t1=cnt1-cnt3;
	}
	ans+=cnt2/2;
	t2=cnt2%2;
	if(t2==1){
		t1=t1-2;
		ans+=1;
	}ans+=t1/4;
	t11=t1%4;
	ans+=min(t11,t3);
	if(t11>t3){
		ans+=t11/4;
		if(t11%4!=0) ans+=1;
	}
	if(t3>t11){
		t33=t3-t11;
		ans+=t33;
	}
cout<<ans<<endl;
}