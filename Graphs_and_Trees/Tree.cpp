#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/contest/763/problem/A

lld n;
vector<lld> g[100000+1];
vector<lld> col(100000+1);
bool dfs(lld node,lld color,lld a,lld vis[]){
	vis[node]=1;
	if(col[node]!=color){
		return 0;
	}
	
	for(auto x:g[node]){
		if(x==a){ vis[a]=1;continue;}
		if(!vis[x]){
		vis[x]=1;
		bool ans=dfs(x,color,a,vis);
		if(ans==0) return ans;}
	}
	return 1;
}

bool solve(lld a){
	bool ans=1;
	for(auto x: g[a]){
		lld vis[100000+1]={0};
		ans=ans&&dfs(x,col[x],a,vis);
	}
	return ans;
}

int main(){
	//lld n;
	cin>>n;
	lld m=n-1;
	
	lld u,v;
	for(lld i=0;i<m;i++){
		cin>>u>>v;
		g[u].pb(v);
		g[v].pb(u);
	}
	lld temp;
	for(lld i=1;i<=n;i++){
		cin>>temp;
		col[i]=temp;
	}
	lld node1,node2,flag=0;
	for(lld i=1;i<=n;i++){
		for(auto x:g[i]){
			if(col[i]!=col[x]){
				node1=i;
				node2=x;
				flag=1;
				break;
			}
		}
		if(flag==1) break;
	}
	bool ans1=0,ans2=0;
	if(flag==1){
		ans1 = solve(node1);
		ans2 = solve(node2);
		if(ans1){
		cout<<"YES"<<endl;
		cout<<node1<<endl;
		}
		else if(ans2){
			cout<<"YES"<<endl;
			cout<<node2<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	else{
		cout<<"YES"<<endl;
		cout<<1<<endl;
	}


}
