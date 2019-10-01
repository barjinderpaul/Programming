#include<iostream>
using namespace std;
int main(){
	int array[5]={1,2,3,4,5};
	for(int i=0;i<5;i++){
		int number=array[i];
		array[i]=array[i+1];
		array[i+1]=number;
		cout<<array[i];
	}
}
