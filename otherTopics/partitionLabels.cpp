#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

vector<int> partitionLabels(string S) {
	vector<int> v;
	map<char, pair<int,int> > m;
	int groups = 0;
	for(int i=0;i<S.length();i++){
		if(m.count(S[i])){
			groups=m[S[i]].first;
				// for(auto j:m){
				// 	if(j.second.second<=i and j.second.second>=m[S[i]].second){
				// 		j.second.first = groups;
				// 	}
				// }
			for(int j=m[S[i]].second;j<i;j++){
				m[S[j]].first = groups;
			}	
			//cout<<groups<<endl;	
		}
		else{
			m[S[i]].first=++groups;
			m[S[i]].second=i;
		}
	}
	int prev =1 ;
	int cnt=1;
	for(int i=1;i<S.length();i++){
		if(m[S[i]].first==prev) cnt++;
		else{
			//cout<<cnt<<endl;
			v.push_back(cnt);
			cnt=1;
			prev=m[S[i]].first;
		}
	}
	v.push_back(cnt);
	return v;
	
}

int main(){
	vector<int> ans = partitionLabels("ababcbacadefegdehijhklij");
	for(int j:ans){
		cout<<j<<endl;
	}
	return 0;
}




// int partitionLabels(string S) {
// 	vector<int> v;
// 	map<char,pair<int,int> > m;
// 	int groups = 0;
// 	for(int i=0;i<S.length();i++){
// 		if(! m.count( [S[i]] )){
// 			m[S[i]].first=++groups;
// 			m[S[i]].second=i;
// 		}
// 		else{
// 			groups=m[S[i]].first;
// 			for(auto j:m){
// 				if(j.second.second<=i or j.second.second>=m[S[i]].second){
// 					j.second.first = groups;
// 				}
// 			}
// 		}
// 	}
// 	return groups;
// }