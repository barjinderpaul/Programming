//binomial coefficient;
#include<iostream>
using namespace std;
int main(){
	/*
	int n,r,diff;
	int64_t mulN, mulR,mulDiff;
	cin>>n>>r;
	diff=n-r;
	int arrN[n];
	arrN[0]=1;
	for(int i=2;i<=n;i++){
		arrN[i]=i;
		mulN *= arrN[i];
	}
	int arrR[r];
	arrR[0]=1;
	for(int i=2;i<=r;i++){
		arrR[i]=i;
		mulR *= arrR[i];
	}
	int arrDiff[diff];
	for(int i=2;i<=diff;i++){
		arrDiff[i]=i;
		mulDiff *= arrDiff[i];
	}
	cout<<mulN/(mulR*mulDiff);
	*/
	int n,r;
	cin>>n;	
	int64_t mulN=1;
	for(int i=n;i>=1;i--){
		mulN= mulN*i;
		
	}
	cout<<mulN;
	
}
