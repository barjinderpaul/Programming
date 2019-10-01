#include<bits/stdc++.h>
using namespace std;
#define MAX 100
void rowColSum(int a[][MAX],int n){
	int rowSum=0,colSum=0;
	for(int i=0;i<n;i++)
		rowSum+=a[n/2][i];
	for(int i=0;i<n;i++)
		colSum += a[i][n/2];
	cout<<rowSum<< " "<<colSum;
}

int main(){
	int n;
	cin>>n;
	int nm=n;
	int **a = new int*[n];
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			cin>>a[i][j];
	rowColSum(a,n);
}
