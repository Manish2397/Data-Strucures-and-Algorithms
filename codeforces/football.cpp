#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main(){
	string a="";
	int cnt0=0,cnt1=0,len;
	cin>>a;
	len=a.length();
	for(int i=0;i<len;i++){
		if(a[i-1]=='0') cnt1=0;
		else cnt0=0;
		if(a[i]=='0'){
			cnt0+=1;
			if(cnt0>=7){
				cout<<"YES";
				return 0;
				break;
			}  

		} 
		else if(a[i]=='1'){
			cnt1+=1;
			if(cnt1>=7){
				cout<<"YES";
				return 0;
				break;
			}
		}


		
	}
cout<<"NO";
}