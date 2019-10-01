#include<iostream>
using namespace std;
int main(){
	long long n,p=0,cd=0;
	cin>>n;
	long long a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i] == -1)
			{
				if(p>0)
					{
						p--;
						continue;
					}
				else
						cd++;
			}
			else
				{
					p+=a[i];
					continue;
				}
		
	}
	cout<<cd;
}
