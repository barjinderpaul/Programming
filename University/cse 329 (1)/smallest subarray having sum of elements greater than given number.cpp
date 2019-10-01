//Question find smallest subarray having sum of elements greater than the given number
#include<iostream>
using namespace std;
int main(){
	int a[5];
	int givenNumber=20;
	for(int i=0;i<5;i++)
	{
		cin>>a[5];
	}
	for(int i=0;i<5;i++){
		if(a[i]>20){
			cout<<"Minimum subarray length = 1"<<endl;
			break;
		}
	}
	for(int i=0;i<5;i++)
		{
			for(int j=0;j<5;j++)
			{
				if(a[i]+a[j+1]>20)
				{
					cout<<"size of array = 2";
				}		
			}
		}
}
