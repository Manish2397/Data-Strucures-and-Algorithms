#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/
class Solution {
public:
    int minAddToMakeValid(string S) {
        stack<char> stk;
        int cnt=0;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                stk.push(S[i]);
            }
            if(S[i]==')'){
                if(stk.empty()){
                    cnt++;
                }
                else{
                    stk.pop();
                }
            }
        }
        cnt+=stk.size();
        return cnt;
    }
};