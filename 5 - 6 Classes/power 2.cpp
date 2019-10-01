#include<bits/stdc++.h>
using namespace std;

int calcPow(int x, int y)
{
	if(y == 0)
		return 1;
	if(y%2 == 0)
	{
		return pow(x,y/2)*pow(x,y/2);          
		}
	if(y%2 != 0)
		return x*calcPow(x,y-1);

}

int main(){
	int x,y;
	cin>>x>>y;
	cout<<calcPow(x,y);
}
