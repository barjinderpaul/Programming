#include<iostream>
using namespace std;
int main(){
	int n,b,cap,waste=0,count=0;
	cin>>n>>b>>cap;
	int a[n];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<=b)
			{
				waste+=a[i];
				if(waste>cap)
					{
						waste=0;
						count+=1;
					}
			}
	
	}
	cout<<count;

}
