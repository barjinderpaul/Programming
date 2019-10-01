#include<bits/stdc++.h>
using namespace std;
//Euclid's GCD Algo
int gcd(int a,int b){
	if(a==0)
		return b;
	else
		return gcd(b%a,a);
}
int main(){
	//Defined in #include<algorithm>
	cout<<__gcd(6,12)<<endl;
	
	cout<<gcd(6,12)<<endl;
	
	//Numeber Theory :
	//Sets 
	//Total sum of the subset;
	
	//Formula = n(n+1)/2*pow(2,n-1);
	int sum=0;
	int a[3]={3,5,8};
	for(int i=0;i<3;i++){
		sum+=a[i];
	}
	cout<<sum*pow(2,2);
		
	}


