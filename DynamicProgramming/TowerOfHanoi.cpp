#include<bits/stdc++.h>
using namespace std;
void toh(char s,char h,char d,int n){
    if(n==1){
        cout<<"disc : "<<n<<"from "<<s<<" to "<<d<<endl;
    }
    if(n==2){
        cout<<"disc : "<<n-1<<"from "<< s <<" to "<< h <<endl;
        cout<<"disc : "<<n<<"from "<<s<<" to "<<d<<endl;
        cout<<"disc : "<<n-1<<"from "<<h<<" to "<<d<<endl;
    }
    else{
        toh(s,d,h,n-1);
        cout<<"disc : "<<n<<"from "<<s<<" to "<<d<<endl;
        toh(h,s,d,n-1);

    }
}
int main(){

    toh('s','h','d',4);
}
