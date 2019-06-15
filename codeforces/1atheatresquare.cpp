#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int q1=n/a;
    long long int q2=m/a;


    long long int  r1=(n%a)*10;
    long long int  r2=(m%a)*10;
    if(r1==0) q1=q1;
    else q1=(int)q1+1;
    if(r2==0) q2=q2;
    else q2=(int)q2+1;
    long long int ans=q1*q2;

    cout<<ans;



}
