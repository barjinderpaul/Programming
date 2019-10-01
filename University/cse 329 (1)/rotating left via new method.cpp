#include<iostream>
using namespace std;
int main(){
	int a[5]={1,2,3,4,5};
int no=a[0];
	for(int i=0;i<5;i++)
	{		
	for(int j=0;j<3;j++){
	
		
		a[i]=a[i+1];
		a[5-1]=no;
		cout<<a[i];
}
	}
	
}
