#include<iostream>
using namespace std;
int main(){
	int a,b,c,d,count=0;
	cin>>a;
	cin>>b;
	if(b==a)
		count+=1;
	cin>>c;
	if( c==b || c==a )
		count+=1;
	cin>>d;
	if( d==c || d==b || d==a)
		count+=1;
	cout<<count;
}
