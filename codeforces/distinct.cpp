#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
#define pb push_back
using namespace std;

//https://codeforces.com/contest/1228/problem/a
int main(){

  lld l,r;
  cin>>l>>r;
  map<char,int> m;
  string temp = to_string(l);
  for(int i =0;i<temp.length();i++){
    if(m.count(temp[i])){
      char s = temp[i];
      while(m.count(s) and s<='9' and s>='0'){
        s+=1;
      }
      if(s<='9' and s>='0'){
        m[s]=1;
        temp[i]=s;
      }
      else{
        cout<<"-1";
        return 0;
      }
      
    }
    else{
      m[temp[i]]=1;
    }
  }
  if(stoi(temp)<=r){
    cout<<temp;
  }
  else{
    cout<<"-1";
  }
}