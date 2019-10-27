#include<bits/stdc++.h>
using namespace std;
int main(){
int t,n;
cin>>t;
while(t-- > 0){
int bits=0,nibble=0,byte=0;
cin>>n;
if(n<27){
	if(n>0 && n<3)
		bits++;
	else if(n>=3 && n<11)
		nibble++;
	else if(n>=11 && n<27)
		byte++;
	}
else {
	
	int div = n/27;
	bits = 2*div;
	int rem = n%27;
	if(rem>0 && rem<3)
		bits++;
	else if(rem>=3 && rem<11)
		nibble++;
	else if(rem>=11 && rem<27)
		byte++;
	}
	cout<<bits<<" "<<nibble<<" "<<byte;
}
}
