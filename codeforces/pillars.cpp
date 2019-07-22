#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


string solve(vector<lld> v,lld n){
	int flag=0;
	int sflag=0;
	int cnt=0;
	for(lld i=1;i<n;i++){
		if(v[i-1]<v[i]){
			sflag=0;
			if(sflag!=flag){
				cnt++;
				flag=sflag;
				if(cnt>1){
					return "NO";
				}
			}
			
		}
		if(v[i-1]>v[i]){
			sflag=1;
			if(sflag!=flag){
				cnt++;
				flag=sflag;
				if(cnt>1){
					return "NO";
				}
			}
			
		}
	}
	return "YES";

}

int main(){
	lld n,temp;
	vector<lld> v;
	cin>>n;
	for(lld i=0;i<n;i++){
		cin>>temp;
		v.push_back(temp);
	}
	cout<<solve(v,n);
}
