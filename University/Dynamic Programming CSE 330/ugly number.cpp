//Ugly Numbers : numbers are only divisble by 2,3 or 5.
#include<iostream>
using namespace std;


int main(){
	int n,flag=0;
	cin>>n;
	for(int i=2;i<=n;i++){
		if(i==2 || i==3 || i==5){
		continue;
			}
		if(n%i == 0)
			flag=1;
	}
	if(flag==0)
		cout<<"Ugly Number";
	else
		cout<<"Not an ugly number";
}
