#include<bits/stdc++.h>
#define lld long long int
#define dl double
#define d int
#define ld long int
#define f float
#define str string
using namespace std;
int main(){
	lld tc,a[103],d1[103],max=0,temp,ans=-1,n;
	cin>>tc;
	for(lld i=0;i<tc;i++){
		cin>>n;
		for(lld j=1;j<=n;j++){
			cin>>a[j];
		}
		a[0]=a[n];
		a[n+1]=a[0];
		for(lld k=1;k<=n;k++){
			cin>>d1[k];
		}
		d1[0]=d1[n];
		d1[n+1]=d1[0];
		for(lld l=1;l<=n;l++){
			temp=d1[l]-a[l-1]-a[l+1];
			if(temp>max){
				max=temp;
				ans=d1[l];
			}
		}
		cout<<ans<<endl;
		max=0;
		ans=-1;


	}
}
