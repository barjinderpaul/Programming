#include<bits/stdc++.h> 
using namespace std; 

bool primesTillN(int n, bool primeOrNot[]) 
{ 
 
	primeOrNot[0] = primeOrNot[1] = false; 
	for (int i=2; i<=n; i++) 
		primeOrNot[i] = true; 

	for (int a=2; a*a<=n; a++) 
	{ 
		if (primeOrNot[a] == true) 
		{ 

			for (int i=a*2; i<=n; i += a) 
			primeOrNot[i] = false; 
		} 
	} 
} 

void findPrimePair(int n) 
{ 
	int flag=1;
	bool primeOrNot[n+1]; 
	primesTillN(n, primeOrNot); 
	for (int i=0; i<n; i++) 
	{ 
		if (primeOrNot[i] && primeOrNot[n-i]) 
		{ 
			cout << i << " " << (n-i); 
			 return;
		} 
		else{
		flag=0;
				}
	} 
	if(flag==0){
		cout<<"Not Possible";
	}
} 

int main() 
{ 
	int n;
	cin>>n;
	findPrimePair(n); 
	return 0; 
} 

