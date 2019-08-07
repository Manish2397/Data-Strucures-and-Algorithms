#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;



int main(){
	std::ios::sync_with_stdio(false);
	int tc;
	cin>>tc;
	while(tc--){
		lld n;
		cin>>n;
		lld *arr = new lld[n+1];
		lld *xr = new lld[n+1];
		map<lld,pair<lld,lld> > m;
		map<lld,pair<lld,lld> > ind;
		cin>>arr[1];
		xr[1]=arr[1];
		m[0]={0,0};
		ind[0]={0,0};
		m[arr[1]]={0,0};
		ind[arr[1]]={1,0};

		for(lld i=2;i<=n;i++){
			cin>>arr[i];
			xr[i]=xr[i-1]^arr[i];
			if(m.count(xr[i])){
				lld curr = i-ind[xr[i]].first-1;
				lld temp = curr*ind[xr[i]].second + m[xr[i]].second + ind[xr[i]].second + curr;
				m[xr[i]].second = temp;
				m[xr[i]].first += temp;
				ind[xr[i]].first = i;
				ind[xr[i]].second++;
			}
			else{
				m[xr[i]]={0,0};
				ind[xr[i]]={i,0};
			}
		}
		lld ans = 0 ;
		for(auto x:m){
			ans+=x.second.first;
		}
		cout<<ans<<endl;


		
		
	}
}

