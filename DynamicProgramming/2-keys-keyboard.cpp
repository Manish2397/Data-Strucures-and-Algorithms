#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;



//https://leetcode.com/problems/2-keys-keyboard/submissions/



long long f(long long target,long long curr,long long copy){
    if(curr>target) return INT_MAX;
    if(curr==target) return 0;
    long long oper1 = f(target,2*curr,curr);
    long long oper2 = f(target,curr+copy,copy);
    return min(2+oper1,1+oper2);
}

int minSteps(int n) {
    if(n==1) return 0;
    int ans =1+ f(n,1,1);
    return ans;
}


int main(){
	int n;
	cin>>n;
	cout<<minSteps(n);
}