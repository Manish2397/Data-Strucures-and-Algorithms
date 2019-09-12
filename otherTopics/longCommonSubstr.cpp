#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

int mat[100][100];
int mx=INT_MIN;
int main(){
	string s1="manisha";
	string s2="aninishamani";
	for(int i=0;i<s1.length();i++){
		for(int j=0;j<s2.length();j++){
			if(s1[i]==s2[j]){
				mat[i+1][j+1]=1+mat[i][j];
				mx=max(mx,mat[i+1][j+1]);
			}
		}
	}
	cout<<mx<<endl;
}
