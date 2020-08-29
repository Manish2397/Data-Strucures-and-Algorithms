#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://practice.geeksforgeeks.org/problems/word-boggle/0
float arr[1000][1000];

string dict[]={"GEEKS","FOR","QUIZ","GO"};
char boggle[][3]={{'G','I','Z'},
				{'U','E','K'},
				{'Q','S','E'}};
int vis[1000][1000];

bool solve(int i, int j,string s,int ind){
	if(i<0 or j<0 or i>=3 or j>=3) return false;
	if(vis[i][j]) return false;
	if(ind==s.length()){
		vis[i][j]=1;
		return true;
	}
	else{

		if(boggle[i][j]==s[ind]){
			vis[i][j]=1;
			return true and(solve(i+1,j,s,ind+1) or solve(i,j+1,s,ind+1) or solve(i-1,j,s,ind+1) or solve(i,j-1,s,ind+1) or solve(i+1,j+1,s,ind+1) or solve(i+1,j-1,s,ind+1) or solve(i-1,j+1,s,ind+1) or solve(i-1,j-1,s,ind+1));
		}
		else{
			return false;
		}
	}
}
int main(){
	vector<string> v;
	for(int i=0;i<4;i++){
		memset(vis,0,sizeof(vis));
		string temp=dict[i];
		char c=temp[0];
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(boggle[i][j]==c){
					if(solve(i,j,temp,0)){
						v.push_back(temp);
					}
				}
			}

		}
	}
	for(auto x:v){
		cout<<x<<endl;
	}
}

