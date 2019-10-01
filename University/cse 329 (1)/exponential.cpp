#include<iostream>
using namespace std;
int fun(int b, int e,int p){
	int res=1;
	b = b%p;
	while(e){
		if(e & 1){
			res = (res * b)%p;
		}
		e =e >>1;  //equivalent to dividing e by 2 //e = e << 1; //multiplying with 2
		b= (b*b)%p;
	}
	return res;
}
int main(){
	int b,e,p;
	cin>>b>>e>>p;
	cout<<fun(b,e,p);
}
