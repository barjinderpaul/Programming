#include<bits/stdc++.h>
using namespace std;
vector<int> prime;
bool vectorPrime[100000];
void seive(int n){
	for(int i=2;i*i<=n;i++)
		{
			if(vectorPrime[i] == false)
				{
					prime.push_back(i);
					for(int j=2*i;j<=n;j+=i){
						vectorPrime[i] = true;
					}
				}
		}
		for(int i=2;i<prime.size();i++)
		{
			if(vectorPrime[i])
				cout<<i<<" ";
		}

}

int main(){
	int n;
	cin>>n;
	seive(n);
 }
