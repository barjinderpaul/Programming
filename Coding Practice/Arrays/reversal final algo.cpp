#include<iostream>
using namespace std;

void reversemyarray(int a[],int start,int stop){
while(start<stop)
{
	swap(a[start++],a[stop--]);
}}
int main(){
	int a[]={1,2,3,4,5},n=5,d=2;
	reversemyarray(a,0,d-1);	reversemyarray(a,d,n-1);	reversemyarray(a,0,n-1);
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
}
