#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://leetcode.com/problems/asteroid-collision
int main(){
	vector<int> v = {-2,-1,1,2};
	stack<int> stk;
	stk.push(v[0]);
	for(int i=1;i<v.size();i++){
		int flag=1;
		int x= v[i];
		//cout<<i<<endl;
		while(!stk.empty() and x*stk.top()<0){
			int flag=1;
			if(abs(x)>abs(stk.top()) and x<0){
				//cout<<1<<x<<endl;
				stk.pop();
				flag=1;
			}
			else if(abs(x)<abs(stk.top()) and x<0){
				//cout<<2<<x<<endl;
				flag=0;
				break;
			}
			else if((abs(x) == abs(stk.top()) ) and x<0){
				//cout<<3<<x<<endl;
				stk.pop();
				flag=0;
				break;
			}
			else{
				break;
			}
		}
		if(flag){
			
			stk.push(x);
			//cout<<4<<stk.top()<<endl;
		}
	}

	while(!stk.empty()){
		cout<<stk.top()<<endl;
		stk.pop();
	}
}
