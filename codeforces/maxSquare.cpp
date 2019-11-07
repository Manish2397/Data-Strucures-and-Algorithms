#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back

//https://codeforces.com/contest/1243/problem/A
using namespace std;


int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int n,temp;
		cin>>n;
		vector<int> v;
		for(int i=0;i<n;i++){
			cin>>temp;
			v.pb(temp);
		}
		sort(v.begin(),v.end());
		int ans=-1,cnt=n;
		for(int i=0;i<n;i++){
			ans=max(ans,min(v[i],cnt));
			cnt--;
		}
		cout<<ans<<endl;

	}
}
