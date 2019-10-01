#include<iostream>
using namespace std;
int main(){
	int number,count=0;
	cin>>number;
	// O(n)
	for(int i=1;i<number;i++){
		if(number%i==0){
			cout<<i<<" " ;
			count++;
		}
	}
	cout<<count;


}
