#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

bool isCycle(int v,vector<int> g[],int vis[],int recStack[]){
	if(!vis[v]){
		vis[v]=1;
		recStack[v]=1;
		for(auto x:g[v]){
			if(recStack[x]==1) return true;
			else if(!vis[x] and isCycle(x,g,vis,recStack)) return true;
		}
	}
	recStack[v]=0;
	return false;
}


bool isCyclic(vector<int> g[],int v){
	int *vis = new int[v]{0};
	int *recStack = new int[v]{};
	for(int i=0;i<v;i++){
		if(isCycle(i,g,vis,recStack)){
			return true;
		}
	}
	return false;
}

int main(){
	vector<int> g[10];
	g[0].pb(1);
	g[1].pb(2);
	g[2].pb(4);
	g[2].pb(3);
	g[4].pb(3);
	g[1].pb(4);
	cout<<isCyclic(g,5)<<endl;
}

