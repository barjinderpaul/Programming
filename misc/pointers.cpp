#include<iostream>
using namespace std;

void func(int *a)
	{
		cout<<a << " ";
		a+=1;
		cout<<a;
	}

int main(){
	int a=100;
	func(&a);
}
