#include<iostream>
using namespace std;
int heap[6] = {0,5,4,1,2,3};
int N=5;
void siftdown(int k){
	while(2*k<=N){
		int j=2*k;
		if(j<N && heap[j]<heap[j+1]) j++;
		if(heap[k]>heap[j]) break;
		swap(heap[k],heap[j]);
		k = j;
	}
}
int main(){
	for(int i=N/2;i>=1;i--)
		siftdown(i);
	while(N>1){
		swap(heap[1],heap[N--]);
		siftdown(1);
	}
}
