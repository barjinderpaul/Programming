//right shifting;
#include<iostream>
using namespace std;
int main(){
	int n = 1232;
	cout<<"Right Shift"<<endl;
	while(n!=1){
		cout<<n<<endl;
		n = n >> 1; //dividing by 2
		
	}
	cout<<"Left Shift"<<endl;
	while (n != 1232){
		cout<<n<<endl;
		n = n<< 1;
	}
}
