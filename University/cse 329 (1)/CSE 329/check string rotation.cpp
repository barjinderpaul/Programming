#include<bits/stdc++.h>
using namespace std;

bool isRotation(string first,string second){
	if(first.length()!=second.length())
		return false;
	string newS = first + first;
	bool f;
	f = newS.find(second)!=string::npos;
	return f;
}

int main(){
	string first;
	string second;
	cin>>first>>second;
	if(isRotation(first,second))
		cout<<"1"<<endl;
	else
		cout<<"0"<<endl;
}
