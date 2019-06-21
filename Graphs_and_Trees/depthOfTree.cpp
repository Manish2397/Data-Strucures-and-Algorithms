#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

int maxHeight(int root,vector<int> adjList[],int vis[]){
	
	vis[root]=1;
	int height=0;
	for(int child:adjList[root]){
		if(vis[child]==0){
			height =max(height,maxHeight(child,adjList,vis));

		}
	}
	return height+1;

}

int main(){
	int vertices,edges,u,v;
	cin>>vertices>>edges;
	vector<int> adjList[vertices];
	int vis[vertices]={0};
	for(int i=0;i<edges;i++){
		cin>>u>>v;
		adjList[u].push_back(v);
		adjList[v].push_back(u);
	}
	int root=0;
	int ans = maxHeight(root,adjList,vis);
	cout<<ans<<endl;
	return 0;
	
}