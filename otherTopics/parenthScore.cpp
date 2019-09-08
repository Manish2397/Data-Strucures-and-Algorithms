#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;


/*
Given a balanced parentheses string S, compute the score of the string based on the following rule:

1. () has score 1
2. AB has score A + B, where A and B are balanced parentheses strings.
3. (A) has score 2 * A, where A is a balanced parentheses string.
*/

int main(){
	string s = "((()))()(())";
	stack<int> stk;
	for(int i=0;i<s.length();i++){
		if(s[i]=='('){
			stk.push(0);
		}
		else{
			if(s[i-1]=='('){
				stk.pop();
				stk.push(1);
			}
			else{
				int sum=0;
				while(stk.top()!=0){
					sum+=stk.top();
					stk.pop();
				}
				stk.pop();
				stk.push(2*sum);
				
			}
		}
	}
	int ans=0;
	while(!stk.empty()){
		ans+=stk.top();
		stk.pop();
	}
	cout<<ans<<endl;
}
