#include<iostream>
using namespace std;
int main(){
	int age[5]={12,13,14,15,16};
	int *p; //integer pointer
	p=age;  //assigns the first element of age array to p
	for(int i =0;i<5;i++){
		cout<<*(p+i)<<endl; // (p+i) because as i=0 , p is also at 0th position of the array, as we will increment in the array with the value of i, so does our value of p will shift to next value
		}
}
