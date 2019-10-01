#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1 = "Hello World";
	string subString = s1.substr(0,5); //copies the string
										//0 - 5
	cout<<subString;
	int pos = s1.find(" "); //save the position where space occurs;
	string newSub = s1.substr(pos+1); //copies rest of the string from pos+1;
	cout<<endl<<newSub;

}
