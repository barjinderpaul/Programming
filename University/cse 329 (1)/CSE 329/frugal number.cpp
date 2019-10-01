#include<bits/stdc++.h>
using namespace std;

int gpf(int n){
	vector<int>pf;
	int count=0;
	if(n%2==0){
			pf.push_back(2);
		while(n%2==0)
		{
			n/=2;
			count++;
		}
	}
	if(count>1)
		pf.push_back(count);
		
	for(int i=3;i*i<=n;i++){
		if(n%i==0){
			pf.push_back(i);
			count=0;
			while(n%i==0)
				{
				n/=i;
				count+=1;
				}
		}
		if(count>1)
			pf.push_back(count);
	}
	if(n>2)
		pf.push_back(n);
	return pf.size();
}



int nDigits(int n){
	int digitCount = 0;
	while(n>0){
		digitCount+=1;
		n/=10;
	}
	return digitCount;
}

int main(){
	int n;
	cin>>n;
	if(nDigits(n)>gpf(n))
		cout<<"frugal";
	else
		cout<<"not frugal";
}
