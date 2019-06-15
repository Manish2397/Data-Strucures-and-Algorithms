#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	string strng[n];
	for(int i=0;i<n;i++)
		cin>>strng[i];
	for(int i=0;i<n;i++){
		if(strng[i].length()<=10){
			cout<<strng[i]<<endl;
		}
		
		else{
			cout<<strng[i][0]<<(strng[i].length())-2<<strng[i][strng[i].length()-1]<<endl;

		}
	}

}