#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ios	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0); 
#define pb push_back
 
ll mod=1000000009;
int a[10][10],b[10][10],c[10][10],N=2;
int main()
{	cout<<"Enter size of arr : ";
	cin>>N;
	cout<<"Enter the elements of arr1\n";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			cin>>a[i][j];

	cout<<"Enter the elements of arr2\n";
	for(int i=0;i<2;i++)
		for(int j=0;j<2;j++)
			cin>>b[i][j];

	for (int i = 0; i < N; i++) 
    { 
        for (int j = 0; j < N; j++) 
        { 
            c[i][j] = 0; 
            for (int k = 0; k < N; k++) 
            { 
                c[i][j] += a[i][k]*b[k][j]; 
            } 
        } 
    } 
    cout<<"Strassens multiplication of arr1 and arr2\n";
	for(int i=0;i<2;i++){
			for(int j=0;j<2;j++)
				cout<<c[i][j]<<" ";
		cout<<endl;
		}
	return 0;
}