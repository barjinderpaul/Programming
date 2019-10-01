#include<iostream>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int limak,bob,years=0;
	cin>>limak>>bob;
	while(limak<=bob)
		{
			limak*=3;
			bob*=2;
			years+=1;
		}
	cout<<years;
}
