#include<bits/stdc++.h>
std::vector<int> semiPrimes; 
bool isSemiPrime( int c )
{
    int a = 2, b = 0;
    while( b < 3 && c != 1 )
    {
	if( !( c % a ) ) 
	{ c /= a; b++; }
	else a++;
    }
    return b == 2;
}
int main( int argc, char* argv[] )
{
    for( int x = 2; x < 110; x++ )
	if( isSemiPrime( x ) )
		semiPrimes.push_back(x);
 	int t,n;
 	std::cin>>t;
 	while(t-- > 0 ){
 		int flag=0;
 		std::cin>>n;
 		for(int i=0;i<=floor(sqrt(n));i++){
 				for(int j=0 ;j<=floor(n/2);j++){
 					 if(semiPrimes[i] + semiPrimes[j] == n)
 					{
 						std::cout<<i<<" "<<j;
 					std::cout<<"YES";
 					return 0;
 					}	
 				else
 					flag=1;
 			}
 		}
 		if(flag==1)
 			std::cout<<"NO";
 			break;
 	}
    return 0;
}
