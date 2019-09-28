#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;
//https://codeforces.com/problemset/problem/799/B
int main(){
    lld n;
    cin>>n;
    lld *arr = new lld[n];
    int *f = new int[n];
    int *b = new int[n];
    for(lld i = 0 ;i<n;i++){
        cin>>arr[i];
    }
    for(lld i = 0  ;i<n;i++){
        cin>>f[i];
    }
    for(lld i = 0 ;i<n;i++){
        cin>>b[i];
    }
    lld cust;
    cin>>cust;
    int *fav = new int[cust];
    for(lld i=0;i<cust;i++){
        cin>>fav[i];
    }
    map<lld,pair<int,int> > first;
    map<lld,pair<int,int> > second;
    map<lld,pair<int,int> > third;

    for(lld i=0;i<n;i++){
        if(f[i]==1 or b[i]==1){
            first[arr[i]]={f[i],b[i]};
        }
        if(f[i]==2 or b[i]==2){
            second[arr[i]]={f[i],b[i]};
        }
        if(f[i]==3 or b[i]==3){
            third[arr[i]]={f[i],b[i]};
        }
    }
    map<lld,int> vis;
    lld *ans = new lld[cust];
    for(lld i=0;i<cust;i++){
        int temp = fav[i];
        if(temp==1){
            if(first.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=first.begin()->first;
                first.erase(ans[i]);
                third.erase(ans[i]);
                second.erase(ans[i]);
            }
        }
        if(temp==2){
            if(second.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=second.begin()->first;
                first.erase(ans[i]);
                third.erase(ans[i]);
                second.erase(ans[i]);
            }
        }
        if(temp==3){
            if(third.empty()){
                ans[i]=-1;
            }
            else{
                ans[i]=third.begin()->first;
                first.erase(ans[i]);
                third.erase(ans[i]);
                second.erase(ans[i]);
            }
        }
    }
    for(lld i=0;i<cust;i++){
        cout<<ans[i]<<" ";
    }
}
