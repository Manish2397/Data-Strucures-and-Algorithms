#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;




void dijikstra(int arr[][5]){
	int vis[];
	for(int i=0;i<v;i++){
		if(police[i]){
			ans[i]=0;
		}
		else{
			q.push(i);
			while(!q.empty()){
				q.pop();
				for(int j=0;j<v;j++){
					if(g[i][j]){

					}
				}
			}
		}
	}
}

int main(){
	int arr[5][5]={
		{0,4,8,0,0},
		{4,0,2,5,0},
		{8,2,0,5,9},
		{0,5,5,0,4},
		{0,0,9,4,0}
	};
	dijikstra(arr);



}
