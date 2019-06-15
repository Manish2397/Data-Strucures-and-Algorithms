#include<bits\stdc++.h>
using namespace std;
struct taxi{
	int v1;
	int v2;
};
bool cmp(taxi a,taxi b){
	return a.v2>b.v2;
}
int ans[100001];
int main(){
	int n,m,ptr1=0,ptr2=1;

	cin>>n>>m;
	taxi name[n+m];
	if(m==1){
		cout<<n;
		return 0;
	}
	
	for(int i=0;i<n+m;i++){
		cin>>name[i].v1;

	}
	for(int i=0;i<n+m;i++){
		cin>>name[i].v2;

	}
	sort(name,name+n+m,cmp);
	
	
	for(int i=m;i<n+m;i++){
		start:
		if(name[i].v1>name[ptr1].v1 and name[i].v1<name[ptr2].v1 ){
			if(abs(name[ptr1].v1-name[i].v1)>abs(name[ptr2].v1-name[i].v1)){
				ans[ptr2]++;
			}
			else ans[ptr1]++;
		}
		else{
			if(ptr2<m-1){
				ptr1++;
				ptr2++;
				goto start;
			}
			else if(ptr2==m-1)
				ans[ptr2]++;
		}
	}
	for(int i=0;i<m;i++){
		cout<<ans[i]<<" ";

	}
}