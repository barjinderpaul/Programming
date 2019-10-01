//code to remove middle element of stack
#include<bits/stdc++.h>
using namespace std;
int main(){
	int middleValue;
	stack<int> s;
	stack<int> s2;
	for(int i=0;i<5;i++){
		s.push(i);
	}
if(s.size()%2==0)
	middleValue=s.size()%2;
else
	middleValue=s.size()%2+1;
//s.pop(middleValue);	
for(int i=middleValue+1;i<s.size();i++){
	s2.push(i);
	s.pop(i);
}
for(int i=s.size()-1;i<s2.size();i++){
	s.push(i)
}
cout<<"After deleting middle value";
for(int i=0;i<s.size();i++)
	cout<<s.top();
}
