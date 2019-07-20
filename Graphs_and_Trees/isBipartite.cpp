#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


bool dfs(vector<int> *g,int vis[],int node,int ptr){
	vis[node] = ptr;
	for(auto x:g[node]){
		if(vis[x]==ptr) return false;
		if(vis[x]==-1){
			return dfs(g,vis,x,ptr^1);
		}
		
	}
	return true;
}

int main(){
	int s,d,e,v;
	cin>>v>>e;
	vector<int> *g = new vector<int>[v];
	for(int i=0;i<e;i++){
		cin>>s>>d;
		g[s].push_back(d);
		g[d].push_back(s);
	}
	int *vis = new int[v];
	for(int i=0;i<v;i++){
		vis[i]=-1;
	}
	cout<<dfs(g,vis,0,0)<<endl;
	
}


// 4 4
// 0 1
// 1 2
// 2 3
// 0 3

// 6 6
// 0 1
// 0 3
// 1 2
// 3 4
// 4 5
// 5 0