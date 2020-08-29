#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;




int main(){
	vector<int> v={100,80,60,70,60,75,85};
	stack<pair<int,int> > stk;
	for(auto x:v){
		int cnt=0;
		while(!stk.empty() and stk.top().first<x){
			cnt+=stk.top().second;
			stk.pop();
		}
		stk.push({x,cnt+1});
		cout<<cnt+1<<" ";
	}

}

