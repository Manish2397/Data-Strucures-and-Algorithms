#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;


//https://leetcode.com/problems/longest-turbulent-subarray/


int maxTurbulenceSize(vector<int>& A) {
    map<int,pair<int,int> > m;
    int maxi=INT_MIN;
    if(A[0]<A[1]){
        m[1].first=-1;
        m[1].second=1;
    }
    else{
        m[1].first=1;
        m[1].second=1;
    }
    for(int i=2;i<A.size();i++){
        if(A[i-1]<A[i]){
            m[i].first=-1;
            m[i].second=1;
            if((m[i-1].first==1 and m[i].first==-1) or (m[i-1].first==-1 and m[i].first==1) ){
                m[i].second+=m[i-1].second;
            }
            
            maxi=max(maxi,m[i].second);
        }
        else if(A[i-1]>A[i]){
            m[i].first=1;
            m[i].second=1;
            if((m[i-1].first==1 and m[i].first==-1) or (m[i-1].first==-1 and m[i].first==1)){
                m[i].second+=m[i-1].second;
            }
int maxTurbulenceSize(vector<int>& A) {
    if(A.size()==1 or A.size()==2) return 1;
    map<int,pair<int,int> > m;
    int maxi=INT_MIN;
    if(A[0]<A[1]){
        m[1].first=-1;
        m[1].second=1;
    }
    else if(A[0]>A[1]){
        m[1].first=1;
        m[1].second=1;
    }
    else{
         m[1].first=0;
         m[1].second=1;
    }
    for(int i=2;i<A.size();i++){
        if(A[i-1]<A[i]){
            m[i].first=-1;
            m[i].second=1;
            if((m[i-1].first==1 and m[i].first==-1) or (m[i-1].first==-1 and m[i].first==1) ){
                m[i].second+=m[i-1].second;
            }
            
            maxi=max(maxi,m[i].second);
        }
        else if(A[i-1]>A[i]){
            m[i].first=1;
            m[i].second=1;
            if((m[i-1].first==1 and m[i].first==-1) or (m[i-1].first==-1 and m[i].first==1)){
                m[i].second+=m[i-1].second;
            }
            
           
        }
        else{
            m[i].first=0;
            m[i].second=0;
            
           
        }
         maxi=max(maxi,m[i].second);
    }
    return 1+maxi;
}
int main(){
	vector<int> v={9,4,2,10,7,8,8,1,9,10,45,31,56,24,78};
	cout<<maxTurbulenceSize(v);
}