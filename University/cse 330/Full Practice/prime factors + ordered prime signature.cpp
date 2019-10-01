#include<bits/stdc++.h>
using namespace std;
vector<int> counts;
void primeFactors(int n){
	int count=0;
	while(n%2==0){
		cout<<"Prime Factors = "<<2	<<endl;
		n=n/2;			//divide n/2 till it becomes 2;
		count++; //count of a number; //number of time 2 occurs if it occurs
	}
	if(count>0)
		counts.push_back(count);
	
	for(int i=3;i*i<=n;i++){	//primeFactors till n from 3;
			count=0;
		while(n%i==0){

			cout<<"Prime Factors = "<<i<<endl;
			n=n/i;
			count++;
		}
		if(count>0)
			counts.push_back(count);
	}
	count=0;
	if(n>2){
		count++;
		cout<<"Prime Factors = "<<n<<endl;
	}
	if(count>0)
		counts.push_back(count);
}

int main(){
	int n;
	cin>>n;
	primeFactors(n);
	sort(counts.begin(),counts.end());
	cout<<"Ordered prime Signature =  ";
	for(int i=0;i<counts.size();i++)
		cout<<counts[i]<<" ";
	cout<<endl<<"Total number of prime divisors = "<<counts.size()<<endl;
	int mul=1;
	for(int i=0;i<counts.size();i++){
		counts[i]+=1;
		mul*=counts[i];
	}
	cout<<"Total number of divisors = "<<mul<<endl;
}
