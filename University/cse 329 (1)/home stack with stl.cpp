#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> stackElements;
	for(int i=0;i<5;i++)
		stackElements.push(i);
	cout<<"Top : "<<stackElements.top()<<endl;
	cout<<"Size : "<<stackElements.size()<<endl;
	cout<<"Empty or not "<<stackElements.empty()<<endl;
	cout<<"Popping Elements " <<endl;
	while(!stackElements.empty()){
		cout<<"Element and top and popped "<<stackElements.top();
		stackElements.pop();
		cout<<endl;
	}
}
