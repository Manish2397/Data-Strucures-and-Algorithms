#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/contest/1249/problem/B1
int dfs(int ind,std::vector<int> v,int i){
	if(v[i]==ind) return 2;
	else{
		return 1+dfs(ind,v,v[i]);
	}
}

int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		int n;
		cin>>n;
		vector<int> v;
		v.pb(0);
		int temp;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.pb(temp);
		}
		vector<int> ans(n+1,0);
		ans.pb(0);
		for(int i=1;i<=n;i++){
			if(i==v[i]) ans[i]=1;
			else
			ans[i]=dfs(i,v,v[i]);
		}
		for(int i=1;i<=n;i++){
			cout<<ans[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
// 6
// 5
// 1 2 3 4 5
// 3
// 2 3 1
// 6
// 4 6 2 1 5 3
// 1
// 1
// 4
// 3 4 1 2
// 5
// 5 1 2 4 3