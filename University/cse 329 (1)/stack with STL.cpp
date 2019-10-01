#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> s;
	for(int i=0;i<=5;i++)
		s.push(i);
	cout<<"Size of the stack "<<s.size()<<endl;
	while(!s.empty()){
		cout<<"Element at top " << s.top()<<endl;
		s.pop();
	}
cout<<"Size of the stack "<<s.size()<<endl;
	
}
