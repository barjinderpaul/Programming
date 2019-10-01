#include<bits/stdc++.h>
using namespace std;

/*
int fact(int n){
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
}

*/

//tail recursive:
int fact(int input,int result){
	if(input<=1)
		return result;
	else
		return fact(input-1,input*result);
}
int main(){
	int input;
	cin>>input;
	cout<<fact(input,1);
}
