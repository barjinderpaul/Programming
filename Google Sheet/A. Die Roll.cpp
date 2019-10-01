#include<iostream>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int maxx= max(x,y);
	if(maxx == 1)
	{
		cout<<"1/1";
		return 0;
	}
	else if(maxx == 6){
		cout<<"1/6";
		return 0;
	}
	int num = 6-maxx +1;
	int deno = 6;
	if( num%2==0 && deno%2==0 )
		{
			num/=2;
			deno/=2;
			cout<<num<<"/"<<deno;
			return 0;
		}
	else if( num%3==0 && deno%3==0 )
		{
			num/=3;
			deno/=3;
			cout<<num<<"/"<<deno;
			return 0;
		}
	cout<<num<<"/"<<deno;
	return 0;

	
}
