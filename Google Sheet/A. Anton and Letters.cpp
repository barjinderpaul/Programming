#include<bits/stdc++.h>
using namespace std;
int main(){

	char s[1000];
	char ch;
	int i=0,count=0;
	vector<int> numbers;
	while(i!=1000){
		cin>>ch;
		if(ch == '}')
			break;
		if(ch=='{' || ch==',')
			continue;
		if(ch>=97 && ch<=122)
			numbers.push_back((int)ch);
		i++;

	}
	sort(numbers.begin(),numbers.end());

	cout<<unique(numbers.begin(),numbers.end())-numbers.begin();

}
