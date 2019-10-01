#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int middle,b,f;
	int len = s.length();
	if(len%2==0)
		middle=len/2-1;
	else
		middle = (len/2);
	cout<<s[middle];
	int i=0;
	b=middle;
	f=middle;
	while(i<middle){
		cout<<s[++f]<<s[--b];
		i+=1;
	}
	if(f!=s.length()-1)
		cout<<s[++f];
	if(b!=0)
		cout<<s[--b];
}
