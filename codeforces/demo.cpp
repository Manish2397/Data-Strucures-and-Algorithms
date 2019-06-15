#include<bits\stdc++.h>
#define lld long long int 
#define dl double 
#define d int
#define ld long int
#define f float
#define str string
using namespace std;
int func(int x){
	
	return x+2;
}
int main(){
	set<int> s;
	s.insert(1);
	s.insert(-1);
	s.insert(10);
	s.insert(8);
	auto it=s.find(-1);
	cout<<*it<<endl;
	s.erase(1);
	for(int x:s){
		cout<<x<<endl;
	}
	vector<lld> v={1,1,3,4,6};
	sort(v.begin(),v.end());
	auto it2=binary_search(v.begin(),v.end(),3);
	auto it3=lower_bound(v.begin(),v.end(),3);
	cout<<it2<<endl;
	//cout<<"-->"<<count(v.begin(),v.end(),1);
	//v.erase(v.begin()+1);
	fill(v.begin(),v.end(),500);
	for(lld x:v)
		cout<<x;
}