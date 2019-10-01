
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%9==0){
		cout<<n/9<<"\n";
		for(int i=0;i<(n/9);i++){
			cout<<9<<" ";
		}
	}
	else if(n%8==0){
		cout<<n/8<<"\n";
		for(int i=0;i<(n/8);i++){
			cout<<8<<" ";
		}
	}
	else if(n%7==0){
		cout<<n/7<<"\n";
		for(int i=0;i<(n/7);i++){
			cout<<7<<" ";
		}
	}
	else if(n%6==0){
		cout<<n/6<<"\n";
		for(int i=0;i<(n/6);i++){
			cout<<6<<" ";
		}
	}
	else if(n%5==0){
		cout<<n/5<<"\n";
		for(int i=0;i<(n/5);i++){
			cout<<5<<" ";
		}
	}
	else if(n%4==0){
		cout<<n/4<<"\n";
		for(int i=0;i<(n/4);i++){
			cout<<4<<" ";
		}
	}
	else if(n%3==0){
		cout<<n/3<<"\n";
		for(int i=0;i<(n/3);i++){
			cout<<3<<" ";
		}
	}
	else if(n%2==0){
		cout<<n/2<<"\n";
		for(int i=0;i<(n/2);i++){
			cout<<2<<" ";
		}
	}
	else if(n%1==0){
		cout<<n/1<<"\n";
		for(int i=0;i<(n/1);i++){
			cout<<1<<" ";
		}
	}
	return 0;
}


