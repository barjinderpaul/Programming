#include<bits/stdc++.h>
using namespace std;
int main()
{
cin.tie(NULL);
ios_base::sync_with_stdio(false);
size_t fib[100];
fib[0]=0;
fib[1]=1;
for(int i=2;i<100;i++)
fib[i]=fib[i-1]+fib[i-2];
int t;
cin>>t;
while(t--)
{
size_t i,j;
cin>>i>>j;
while(1)
{		
			if((i==0)||(j==0))
			break;
			else if(i>j)
			i%=j;
			else
			j%=i;
		}
	if(i==0)
	cout<<fib[j];
	else
	cout<<fib[i];
	}
return 0;
}		
	
