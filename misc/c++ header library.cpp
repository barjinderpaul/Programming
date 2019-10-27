//c++ algorithm library functions :
#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main(){
	int ab=12,b=6;
	cout<<"1. Gcd of ab=12 and b=6"<<__gcd(ab,b)<<endl;
	int a[]={1,232,23,232,5};
	int n=sizeof(a)/sizeof(a[0]);
	cout<<"Array elements"<<endl;
		for(int i=0;i<n;i++){
			cout<<a[i] << " ";
		}
	cout<<" Made vector out of array with vector<int> vectorOfArray(arr,arr+n)"<<endl;
	vector<int> vectorOfArray(a,a+n);
	cout<<"Vector elements" <<endl;
	for(int i=0;i<vectorOfArray.size();i++){
		cout<<vectorOfArray[i]<<" ";
	}
}
