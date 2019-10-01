#include<bits/stdc++.h>
using namespace std;
int main(){
	int rows,columns;
	cin>>rows>>columns;
	int a[rows][columns];
	for(int i=0;i<rows;i++){
		for(int j=0;j<columns;j++){
			cin>>a[i][j];
		}
	}
	
	//output 2d array 	
	for(int i=0;i<rows;i++)
	{
		for(int j=0;j<columns;j++)
		{
			cout<<a[i][j]<< " ";	
		}
		cout<<endl;
	}
}	
