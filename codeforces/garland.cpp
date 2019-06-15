#include<bits\stdc++.h>
#define lld long long int
#define dl double
#define d int
#define ld long int
#define f float
#define str string
using namespace std;

int main(){
	str a;
	lld n,cnt=0;
	cin>>n;
	cin>>a;

	        if(a[n-1]==a[n-2]){
            if(a[n-1]==a[n-2] and a[n-2]=='B'){
                if(a[n-3]!='G')
                a[n-2]='G';
                else a[n-2]='R';
                cnt++;
            }
            else if(a[n-1]==a[n-2] and a[n-2]=='G'){
                if(a[n-3]!='B')
                a[n-2]='B';
                else a[n-2]='R';
                cnt++;
            }
             else if(a[n-1]==a[n-2] and a[n-2]=='R'){
                if(a[n-3]!='G')
                a[n-2]='G';
                else a[n-2]='B';
                cnt++;
            }
        }


	for(lld i=1;i<n-1;){

		if(a[i-1]==a[i]){
			if((a[i-1]=='R' and a[i+1]=='G') or (a[i-1]=='G' and a[i+1]=='R')){
				a[i]='B';
				cnt++;
			}
			if((a[i-1]=='R' and a[i+1]=='B') or (a[i-1]=='B' and a[i+1]=='R')){
				a[i]='G';
				cnt++;
			}
			if((a[i-1]=='B' and a[i+1]=='G') or (a[i-1]=='G' and a[i+1]=='B')){
				a[i]='R';
				cnt++;
			}
			if((a[i-1]=='B' and a[i+1]=='B') or (a[i-1]=='B' and a[i+1]=='B')){
				a[i]='R';
				cnt++;
			}
			if((a[i-1]=='G' and a[i+1]=='G') or (a[i-1]=='G' and a[i+1]=='G')){
				a[i]='R';
				cnt++;
			}
			if((a[i-1]=='R' and a[i+1]=='R') or (a[i-1]=='R' and a[i+1]=='R')){
				a[i]='G';
				cnt++;
			}

		}
		if(a[i]==a[i+1]){
			if((a[i-1]=='R' and a[i+1]=='G') or (a[i-1]=='G' and a[i+1]=='R')){
				a[i]='B';
				cnt++;
			}
			if((a[i-1]=='R' and a[i+1]=='B') or (a[i-1]=='B' and a[i+1]=='R')){
				a[i]='G';
				cnt++;
			}
			if((a[i-1]=='B' and a[i+1]=='G') or (a[i-1]=='G' and a[i+1]=='B')){
				a[i]='R';
				cnt++;
			}
			if((a[i-1]=='R' and a[i+1]=='R') or (a[i-1]=='R' and a[i+1]=='R')){
				a[i]='G';
				cnt++;
			}
			if((a[i-1]=='G' and a[i+1]=='G') or (a[i-1]=='G' and a[i+1]=='G')){
				a[i]='R';
				cnt++;
			}
			if((a[i-1]=='B' and a[i+1]=='B') or (a[i-1]=='B' and a[i+1]=='B')){
				a[i]='R';
				cnt++;
			}

		}
		if(a[i+1]!=a[i+2]){
            /*if(i+3>=n-1) i=i+2;
            else*/
			i+=3;
			continue;
		}
		if(a[i+1]==a[i+2]){
			i+=2;
			continue;
		}


	}
	cout<<cnt<<endl;
	cout<<a;

}
