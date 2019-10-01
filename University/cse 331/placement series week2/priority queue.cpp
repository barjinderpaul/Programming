#include<bits/stdc++.h>
using namespace std;
int main(){
	//priority queue with stl;
	priority_queue<int>pq;
	for(int i=100;i<=1000;i+=100)
		pq.push(i);
	cout<<"size = "<<pq.size()<<endl;
	cout<<"front = "<<pq.top()<<endl;
	pq.pop();
	cout<<"after pop = "<<pq.top()<<endl;
	priority_queue<int> nq=pq;
	while(!nq.empty()){
		cout<<nq.top()<<endl;
		nq.pop();
	}
	priority_queue<int, vector<int>, greater<int> > pq2 = pq;
	while(!pq2.empty()){
		cout<<pq2.top()<<endl;
		pq2.pop();
	}
}
