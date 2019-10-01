#include<iostream>
using namespace std;

struct prq{
	int id,priority;
}heap[11];

int N;
int parent(int k){
	return k/2;
}
void siftup(int k){
	while(k>1 && heap[parent(k)].priority<heap[k].priority){
		swap(heap[parent(k)],heap[k]);
		k=parent(k);
	}
}
void siftdown(int k){
	while(2*k<=N){
		int j=2*k;
		if(j<N&&heap[j].priority < heap[j+1].priority) j++;
		if(heap[k].priority > heap[j].priority) break;
		swap(heap[k],heap[j]);
		k=j;
	}
}
int getmax(){
	return heap[1].id;
}
void ins(prq num){
	heap[++N] = num;
	siftup(N);
}
int extractMax(){
	int Id = heap[1].id;
	swap(heap[1],heap[N--]);
	siftdown(1);
	return Id;
	
}
void display(){
	for(int i=1;i<=N;i++)
		cout<<"ID = "<<heap[i].id<<" priority = "<<heap[i].priority<<endl;
}
int main(){
	prq temp;
	int times;
	cout<<"enter number of elements "<<endl;
	cin>>times;
	for(int i=1;i<=times;i++){
		cin>>temp.id>>temp.priority;
		ins(temp);
	}

	//cout<<" extract max = "<<extractMax()<<endl;
	display();
	cout<<"Process will be executed in order "<<endl;
	while(N>0){
		cout<<"Process with priority = "<<extractMax()<<endl;
		N--;
	}
}
