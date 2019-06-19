long long f(long long n,long long dp[]){
    if(n==1){
        return 2;
    }
    if(n==2){
        return 3;
    }
    if(dp[n]==0){
        long long ans=f(n-1,dp)+f(n-2,dp);
        dp[n]=ans;
        return ans;
    }
    return dp[n];
    
    
}
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,ans,tc,dp[100005]={0};

    cin>>tc;
    while(tc--){
        cin>>n;
        ans = f(n,dp);
        cout<<ans<<endl;
    }
}