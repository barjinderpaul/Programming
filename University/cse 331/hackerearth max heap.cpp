/*
HEAP
	Imp points :
	1. Can be max heap or min heap.
	2. It is a complete binary heap
	3. Minimun height possible = log base2 N
	4. root is at index 1
	5. Parent is at index i/2
	6. Left child is at index 2*i
	7. Right child is at index 2*i+1
	8. Leaf nodes are at n/2+1 to n
		example : Number of elements = 7
		then, leaf nodes will be at:
		n/2+1 = 4th index a leaf will be present
		n/2+2 = 5th
		n/2+3 = 6th
		n/2+4 = 7th index a leaf will be present
*/
#include<bits/stdc++.h>
using namespace std;
int largest=0;
void max_heapify(int a[],int i,int n){
	int left = 2*i;
	int right = 2*i+1;
	if(left<=n && a[left]>a[i])
		largest=left;
	else
		largest=i;
	if(right<=n && a[right]>a[largest])
		largest = right;
	if(largest!=i){
		swap(a[i],a[largest]);
		max_heapify(a,largest,n);
	}
}

void buildMaxHeap(int a[],int n){
	for(int i=n/2;i>=1;i--){
		max_heapify(a,i,n);
	}
}
int main(){
	int n;
	cin>>n;
	int a[n+1];
	for(int i=1;i<=n;i++){
		cin>>a[i]; //1 4 3 7 8 9 10
	}
	cout<<"before building "<<endl;
	for(int i=1;i<=n;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;
	
	buildMaxHeap(a,n);
	
	cout<<"displaying array = "<<endl;
	for(int i=1;i<=n;i+=1)
		cout<<a[i]<< " ";
	
	
}
