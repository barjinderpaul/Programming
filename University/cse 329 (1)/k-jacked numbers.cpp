//K-Jacked numbers
/*
number -> Smallest Prime Factor -> check spf >= K, then yes, else no

number  = 10;
First 10, 3-Jacked Numbers :
A 3-Jacked number, if SPF for that number is >=3
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cout<<"n and k";
	cin>>n>>k;
	vector<int> primeFactors;
	for(int num=1;num<=n;num++){
		for(int p=2;p*p<=num;p++){
		while(num%p == 0){
			
			primeFactors.push_back(p);
			num = num/ p;
		}
	}
	if(num>1){
			primeFactors.push_back(num);
			
		}
	
		if(primeFactors[num]  >= 3)
			cout<<"K-Jacked";
	else 
		cout<<"No";
}
}
