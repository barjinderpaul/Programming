#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int a[4],ans=0;
	for(int i=1;i<=4;i++)
		cin>>a[i];
	string s;
	cin>>s;
	//cout<<"a[4]"<<a[4]<<endl;
	for(int i=1;i<=s.length();i++){
		if(s[i] == '1')
		{
				ans+=a[1];
		//		cout<<"ans , a[1] "<<ans<<a[1]<<endl;
				continue;
		}
		else if(s[i]=='2')
		{
			ans+=a[2];
		//		cout<<"ans , a[1] "<<ans<<a[2]<<endl;
			continue;
		
		}
		else if(s[i]=='3')
		{
			ans+=a[3];
		//	cout<<"ans , a[1] "<<ans<<a[3]<<endl;
			continue;
		}
		
		else if(s[i]=='4')
		{
			ans+=a[4];
		//	cout<<"ans , a[1] "<<ans<<a[4]<<endl;
			continue;
		}
	}
	cout<<ans;
}
