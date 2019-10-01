#include<bits/stdc++.h>
using namespace std;

int findBinary(int n){
	if(n==0)
		return 0;
	findBinary(n/2);
	cout<<n%2;
}

int main(){
	for(int i=1;i<=10;i++)
	{
		cout<<"binary for"<< i<<" = ";
		findBinary(i);
		cout<<endl;
	}
}
