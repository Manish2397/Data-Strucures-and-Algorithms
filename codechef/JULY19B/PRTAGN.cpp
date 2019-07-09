/*#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;




int main(){
	lld tc;
	cin>>tc;
	while(tc--){
		lld q;
		map<lld,lld> m;
		cin>>q;
		lld odd=0,even=0;
		while(q--){
			lld x;
			cin>>x;
			if(!m.count(x)){
				lld cnt = __builtin_popcount(x);
				if(cnt%2==0){
					lld e=even;
					lld o=odd;
					even+=e;
					
					odd+=o;
					even++;
				}
				if(cnt%2!=0){
					lld e=even;
					lld o=odd;
					even+=o;
					odd+=e;
					odd++;
				}
				m[x]=1;
				cout<<even<<" "<<odd<<endl;

			}

			else{
				lld cnt = __builtin_popcount(x);
				if(cnt%2==0){
					lld e=even-1;
					lld o=odd;
					even+=e;
					
					odd+=o;
					//even++;
				}
				if(cnt%2!=0){
					lld e=even;
					lld o=odd-1;
					even+=o;
					odd+=e;
					//odd++;
				}
				m[x]=1;
				cout<<even<<" "<<odd<<endl;

			}
		
		}
		m.clear();
	return 0;
	}
}*/


#include<bits/stdc++.h>
#define lld long long int
#define ld long int
#define str string
#define dbl double
using namespace std;




int main(){
	int tc;
	cin>>tc;
	while(tc--){
		int q;
		unordered_map<lld,lld> m;
		cin>>q;
		lld o=0,e=0,x;
		while(q--){
			
			cin>>x;
			if(!m.count(x)){
				for(auto i:m ){
					
					lld temp=i.first^x;
					if(!m.count(temp)){
						int cnt = __builtin_popcount(temp);
						if(cnt%2==0) e++;
						else o++;
						m[temp]=cnt;
					}
				 
					
				}
				
				m[x]=__builtin_popcount(x);
				 if(m[x]%2==0) e++;
				 else o++;
				
				// for(auto i:m ){
				// 	if(i.second%2==0) e++;
				// 	else o++;
				// }	
				
			}
		
			cout<<e<<" "<<o<<endl;
		}

	}
	return 0;
}