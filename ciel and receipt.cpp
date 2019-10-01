#include<bits/stdc++.h>
using std::endl;
typedef long long lli ;
int main()
{
	std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);
    lli t;
    std::cin>>t;
    lli powers;lli count;
    while(t--)
    {
    	std::cin>>powers;
    	count=0;lli i=0;
    	while(powers!=0)
    	{
    		for(i=0;i<12;i++)
			{
				if(powers<pow(2,i))
				break;
			}
			count++;
			powers-=pow(2,i-1);
		}
		std::cout<<count<<endl;
	}
}
