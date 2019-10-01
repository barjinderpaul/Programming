#include<iostream>
using namespace std;
void numberOfDivisors(int n){
	int count = 0;
	for(int i=1;i<=n;i++){
		if(n%i == 0)
		{
			cout<<"Divisor = "<<i<<" ";
			count+=1;
		}
	}
	cout<<endl<<"Total Count : " <<count;
}
int main(){
	int n;
	cin>>n;
	numberOfDivisors(n);
}
