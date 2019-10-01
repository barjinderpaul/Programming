//Program to check whether the number is fine or not;
/*
19 = 1^2 + 9^2  =82;
82= 8^2 + 2^2;
...
100 = 1^2 + 0^2 + 0^2;
	= 1
	therefore fine number.
*/
#include<bits/stdc++.h>
using namespace std;

string fineNumbers(int n){
		int sum=0,lsum=0;
		int a[100]={};
		int i=0,l=0;
		int sumArr[100]={};
		if(sum == 1)
			return "Fine Number";
		for(int i=0;i<lsum;i++){
			if(sum==sumArr[i])
				return "Not Fine";
		}
		
		while(n>0){
		a[i]=n%10;
		n/=10;
		i++;
		l++;
	}
	//INT numbers(int n)
	
	
	for(int i=l-1;i>=0;i--){
		sum+= pow(a[i],2) + pow(a[i-1],2);
		sumArr[i]=sum;
		lsum++;
		break;
	}
	return fineNumbers(sum);
	
}
int main(){
	int n;
	cin>>n;
	cout<<fineNumbers(n);
}
