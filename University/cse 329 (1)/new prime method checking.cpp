#include<iostream>
#include<math.h>
using namespace std;
int main(){
	double number;
	cout<<"enter no.";
	cin>>number;
	double a=13;
	double med=number-1;
	if((pow(a,med) % number)==1.0){
		cout<<"Prime Number";
	}
	else{
		cout<<"Not a prime";
	}
}
