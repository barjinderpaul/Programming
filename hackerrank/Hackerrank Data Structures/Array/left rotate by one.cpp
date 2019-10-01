#include<iostream>
using namespace std;
int rotate(int a[]){
	int temp=a[0];
	for(int i=0;i<5;i++){
		a[i]=a[i+1];
	}
	a[5-1]=temp;
}
int main(){
	int a[]={1,2,3,4,5};
	int	b[]={1,2,3,4,5};
	int d;
	cin>>d;
	while(d>0){
	rotate(a);
	d--;
	}
	for(int i=0;i<5;i++){
		cout<<a[i];
	}
}
