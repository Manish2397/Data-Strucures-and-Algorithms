#include<bits\stdc++.h>
using namespace std;
int main(){
	int a,b,f,k;
	cin>>a>>b>>f>>k;
	if((b<2*k)||b<2*(a-k)){
		cout<<-1;
		return 0;
	}
	int path=1;
	int temp=b;
	int pt=0;
	int cnt=0;
	while(pt!=k){
		if(path%2!=0){

			for(int i=0;i<a;i++){
				if(pt==k) break;
				if(i==f){
					if((pt==k-1)&&(b<(a-i))){
						b=temp;
						cnt++;
					}
					if(b<(2*(a-i))&&(pt!=k-1)){
						b=temp;
						cnt++;
					}			
				}
				else b--;
			}
			pt++;
			path++;
			if(pt==k) break;
		}
		if(path%2==0){
			for(int j=b;j>0;j--){
				if(pt==k) break;
				if(j==f){
					if((pt==k-1)&&(b<j)){
						b=temp;
						cnt++;
					}
					if((b<2*j)&&pt!=k-1){
						b=temp;
						cnt++;
					}
				}
				else b--;
			}
			pt++;
			path++;
			if(pt==k) break;
		}
	if(pt==k) break;
	}
cout<<cnt;
}