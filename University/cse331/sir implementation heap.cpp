//class implementation:
#include<bits/stdc++.h>
using namespace std;
//array implementation of 10 elements;
//shift up while inserting and shift down in extract max;
int n, heap[11],capacity=10;
int parent(int k){
		return k/2;
}

void siftup(int k){
	while(k>1 && heap[parent(k)]<heap[k]){
		swap(heap[parent(k)],heap[k]);
		k = parent(k);		
	}
}

void getMax(){
	return heap(1);
}

void ins(int num){
	if(n==capacity){
		cout<<"max capacity reached"<<endl;
		return;
		
	}
	heap[++n];
	siftup(n);
}	

void siftdown(int k){
	while(2*k<=n){
		int j = 2*l;
		if(j<n && heap[j]<heap[j+1]) j++;
		if(heap[k])
	}
}
int extractMax(){
	if(n<1){
		cout<<"already empty"<<endl;
		return -1;
	}
	int max= heap[1];
	swap(heap[1],heap[n--]);
	siftdown(1);
	return max;
}

int increaseKey(int index, int value){
	a[index] = value;
	siftup(index);
}
int changeKey(int k){
	int old  = heap(index);
	heap[index] = value;
	if(heap[index]>old)
		siftup(index);
	else if(heap[index]<old)
		siftdown(index);
		
}
int main(){
	
	
}
