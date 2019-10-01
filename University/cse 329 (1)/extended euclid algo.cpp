//Bezout's identity = ax + by = g.
//if two numbers give out gcd as g, then it can be wriiten as ax + by = g.

//Extended euclid algorithm; because of bezout's identity which is used in cryptography.

/*
gcd(6,4) can be expressed as :
	6 = 4(1) + 2  , 2= 6(1)  + 4(-1)
	4 = 2(1) + 2  ,  	

Test case :	
		gcd(1180, 482)
		
	Euclid Algo, 
		1180 = 482*2 + 216 
		482 = 216*2 + 50
		216 = 50*4 + 16
		50 = 16*3 + 2
		16 = 2*8 +0
		
		gcd = 2
	
	Extended Euclid Algo,
		2 = 50 + 16(-3)
		2 = 50 + (216 + 50(-4))(-3)
		2 = 216(-3) + 50(13)
		2 = 216(-3) + (482 + 216(-2))(13)
		2 = 482(13) + 216(-29)
		2 = 482(13) + (1180 + 482(-2))(-29)
		2 = 482(13) + 1180(-29)  + 482(58)
		2 = 1180(-29) + 482(71)
		Comparing with ax+by = g
		g = 2, 
		x = -29;
		y = 58
*/
		
#include<bits/stdc++.h>
using namespace std;

int egcd(int a, int b, int &x, int &y){ //Pass by Reference s.t. actual values are affected
	if(a == 0) {
		x = 0;
		y = 1;
		return b;
	}
	int x1, y1;
	int d = egcd(b%a,a,x1,y1);
	x = y1 + (b/a) *x1;	
	y = x1;
	return d;
}

int main(){
	int x, y;
	cout<<egcd(10,50,x,y)<<endl;
	cout<<x<<" "<<y;	
}
