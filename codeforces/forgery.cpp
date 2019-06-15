#include<bits\stdc++.h>
using namespace std;
int main(){
	int m,n,temp;
	cin>>m>>n;
	char arr[m][n];
	int xmin=n;
	int xmax=0;
	int ymin=m;
	int ymax=0;

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];

			if(arr[i][j]=='#' && j>=0 && j<=xmin){
				xmin=j;
				
			}
			if(arr[i][j]=='#' && j<=n && j>=xmax){
				xmax=j;
				

			}
			if(arr[i][j]=='#' && i<=m && i>=ymax){
				ymax=i;
				

			}
			if(arr[i][j]=='#' && i>=0 && i<=ymin){
				ymin=i;
				
			}

		}
	}
	
	for(int i=ymin;i<=ymax;i++){
		for(int j=xmin;j<=xmax;j++){
			//boundary condition
			if((i==ymin && arr[i][j]=='.')||(i==ymax && arr[i][j]=='.')||(j==xmin && arr[i][j]=='.')||(j==xmax && arr[i][j]=='.')){
				cout<<"NO";
				return 0;
			}
			if((arr[i][j]=='.' && arr[i-1][j]=='.')||(arr[i][j]=='.' && arr[i][j-1]=='.')){
				cout<<"NO";
				return 0;
			}

		}
	}
	cout<<"YES";
}