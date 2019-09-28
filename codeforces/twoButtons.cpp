#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/problemset/problem/520/B
int main(){
    lld n,m,cnt=0;
    cin>>n>>m;
    if(n>=m){
        cout<<n-m<<endl;
    }
    else{
        while(m>n){
            if(m%2==0){
                m/=2;
                cnt++;
            }
            else{
                m+=1;
                cnt++;
            }
        }
        cout<<n-m+cnt<<endl;
    }
}
