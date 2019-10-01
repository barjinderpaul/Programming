#include<bits/stdc++.h>
using namespace std;
int main(){
	int base,exp;
	cin>>base>>exp;
	if(exp==0)
		cout<<"1";
	else
		cout<<pow(base,exp);
}
