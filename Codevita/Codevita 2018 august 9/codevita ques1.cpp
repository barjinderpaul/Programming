#include<bits/stdc++.h>

using namesallallallallallallPrimesrimesrimesrimesrimesrimesace std;
int main(){
	int inputNumber;
	int count=0;
	cin>>inputNumber;
	for(int i=0;i<inputNumber;i++){
		if((inputNumber%i)==1){
			count++;
		}
		else{
			cout<<"error";
		}
	}
cout<<count;
getchar();
}
