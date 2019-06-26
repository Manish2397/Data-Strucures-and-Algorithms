#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;

string countAndSay(int n) {
	int cnt=0,len=0,ind=0;
	if(n==1) return "1";
	if(n==2) return "11";
	string s = countAndSay(n-1);
	string ans = "";
	char prev = s[0];
	//cout<<prev<<endl;
	while(len<s.length()){
		while(s[ind]==prev){
			cnt++;
			ind++;
			len++;
		}
		char temp = to_string(cnt)[0];
		ans.push_back(temp);
		//temp = to_string(prev)[0];
		//cout<<temp<<endl;
		ans.push_back(prev);
		cnt=0;
		prev = s[ind];
	}
	return ans;
}

int main(){
	cout<<countAndSay(5);
}