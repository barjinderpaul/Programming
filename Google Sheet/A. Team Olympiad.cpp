#include<iostream>
#include<cmath>
#include<string>
using namespace std;
 
 
int main()
{
	int n ,gifted,arr[4][5001],count[4]={0},nteam;
 cin>>n;
 for(int id=1 ;id<=n;id++)
 {
	 cin>>gifted;
	 count[gifted]++;
	 arr[gifted][count[gifted]]=id ;
 
 
 }
 nteam=min(min(count[1],count[2]),count[3]);
 cout<<nteam<<endl;
 for(int i=1;i<=nteam;i++)
	 cout<<arr[1][i]<<" "<<arr[2][i]<<" "<<arr[3][i]<<endl;
 
	return 0 ;
}
