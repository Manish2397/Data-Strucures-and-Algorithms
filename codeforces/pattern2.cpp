#include<bits\stdc++.h>
using namespace std;
int main(){
	for(int i=1;i<=8;i++){
		for (int j = 1; j <=5; j++)
		{
			if((i==3 and j==2) or (i==3 and j==4) or (i==6 and j==2) or (i==6 and j==4))
				cout<<" ";
			else cout<<'*';
		}	
		cout<<"\n";

	}
}