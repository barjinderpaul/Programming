#include<iostream>
using namespace std;
int Add(int x, int y) 
{ 
	// Iterate till there is no carry 
	while (y != 0) 
	{ 
		// carry now contains common 
		//set bits of x and y 
		int carry = x & y; 

		// Sum of bits of x and y where at 
		//least one of the bits is not set 
		x = x ^ y; 

		// Carry is shifted by one so that adding 
		// it to x gives the required sum 
		y = carry << 1; 
	} 
	return x; 
} 

int main() 
{ 
	int sum = 3,count=0;
	for(int i=369;i<=428;i++){
		for(int j=369;j<=428;j++){
			if( Add(i,j) == 797 )
				count+=1;
		}
	}
	cout<<count; 
	return 0; 
} 

