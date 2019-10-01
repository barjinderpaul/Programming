#include<iostream>
using namespace std;
int main(){
	int n,counta=0,countd=0;
	char ch;
	cin>>n;
	while(n--){
		cin>>ch;
		if(ch == 'A')
			counta+=1;
		else
			countd+=1;
	}
	if(counta>countd)
		cout<<"Anton";
	else if(counta == countd)
		cout<<"Friendship";
	else
		cout<<"Danik";
}
