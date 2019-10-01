#include<bits/stdc++.h>
using namespace std;
vector<uint64_t>series;

uint64_t phi(uint64_t n) 
{ 
    float result = n; 
    for (uint64_t p = 2; p * p <= n; ++p) { 
         if (n % p == 0) { 
            while (n % p == 0) 
                n /= p; 
            result *= (1.0 - (1.0 / (float)p)); 
        } 
    } 
	if (n > 1) 
        result *= (1.0 - (1.0 / (float)n)); 
  
    return (uint64_t)result; 
} 
  
void makeSeries(uint64_t n){
	for (uint64_t i = 1; i <= n; i++) 
	       	series.push_back(phi(i));
		
}
int main() 
{
	uint64_t t,n;
	cin>>t;
	makeSeries(10000);
	while(t--){
		cin>>n;
		uint64_t count=0,flag=0;
		for(uint64_t i=0;i<n-1;i++)
			{
				if(series[i]%2==0)
					count+=series[i];		
			}
		if(count>0)
			cout<<"YES "<<count<<endl;
		else
			cout<<"NO"<<endl;
		}
	return 0;
} 
