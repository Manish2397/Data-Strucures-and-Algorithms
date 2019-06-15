#include <bits/stdc++.h>
using namespace std;
long long int n, i = 9, temp = 1, a, Sum;
long long int s;
int main(){
    cin>>n;
    s = n;
    while(s>9){
        s = s/10;
        temp++;
    }
    while(--temp)
        s = s*10 + 9;
    temp = n - s;
    while((s!=0)||(temp!=0)){
        Sum = Sum + s%10 + temp%10;
        s = s/10;
        temp = temp/10;
    }
    cout<<Sum;
    return 0;
}