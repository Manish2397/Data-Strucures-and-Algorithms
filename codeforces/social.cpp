#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;


int main(){
	lld n,k,temp;
	cin>>n>>k;
	// vector<int> v(n);
	deque<lld> q;
	map<lld,lld> m;
	for(lld i=0;i<n;i++){
		cin>>temp;
		if(!m.count(temp) or m[temp]==0){
			if(q.size()<k){
				m[temp]=1;
				q.push_front(temp);}
			else{
				m[q.back()]=0;
				q.pop_back();
				
				q.push_front(temp);
				m[temp]=1;
			}
		}
		
	}
	cout<<q.size()<<endl;
	while(!q.empty()){
			cout<<q.front()<<" ";
			q.pop_front();
	}

}
