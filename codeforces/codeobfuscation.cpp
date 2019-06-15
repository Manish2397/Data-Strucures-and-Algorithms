#include<bits/stdc++.h>
using namespace std;
int main(){
	char i='a';
	string strng;
	cin>>strng;
	for(int a=0;a<strng.length();a++){
		if(strng[a]=='\0'){
		cout<<"NO";
		return 0;}
		if((strng[a]==i)||((strng[a]-i==1)&&(strng[0]=='a'))||(strng[a]<i)){
			if(strng[a]>i){ i=strng[a];
			continue;}
		}
		else{
			cout<<"NO";
			return 0;
		}
	}

	cout<<"YES";
}
