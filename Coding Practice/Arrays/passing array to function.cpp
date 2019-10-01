#include<iostream>
using namespace std;
float avg(int a[]){
	float average;int sum;
	for(int i=0;i<5;i++){
		sum+=a[i];
	}
	average=sum/5;
	cout<<"Sum ="<<sum<<endl;
	return average;
}
int main(){
	int array[]={1,2,3,4,5};
	float ansaverage = avg(array);
	cout<<"Average = "<<ansaverage;
}
