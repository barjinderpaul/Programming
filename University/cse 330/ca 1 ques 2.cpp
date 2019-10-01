#include<iostream>

using namespace std;

bool isPrime( int num )
{
	if( num >= 1 && num <= 3 )
		return true;
	if( num % 2 == 0 )
		return false;
	for( int i = 3 ; i < num/2 ; i=i+2 )
	{
		if( num%i==0 )
			return false;
	}
	return true;
}

int main()
{
	int n;
	cin >> n;
	
	int temp = 2;
	int myCount = 0;
	for( int j = 3 ; j < n ; j++ )
	{
		if( isPrime(j) )
		{
			temp+=j;
			if( isPrime(temp) && temp<n )
			{
				myCount++;
				cout <<"Prime Number " << temp << endl;	
				}
			
		}
	}
	
	cout <<"count "<< myCount << endl;
	return 0;
}
