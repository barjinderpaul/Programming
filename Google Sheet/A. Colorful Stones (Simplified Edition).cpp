#include<iostream>
#include<string>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int i=0,j=0, pos=1;
	int len1 = s1.length();
	int len2 = s2.length();
	//cout<<len1<<len2<<endl;
	//cout<<i<<j<<endl;
	if( len2 == 1 && len1==1 )
		{
		cout<<"1";
		return 0;
		}
	if( len2 == 1 && len1>1 )
	{
		if(s1[i] == s2[j])
		{
			cout<<"2";
			return 0;
		}
		else{
			cout<<"1";
			return 0;
		}
	}

	while( i<len1 && j<len2)
	{
	//	cout<<"si " << s1[i] << "  s2i "<<s2[j]<<endl; 
		if( s1[i] == s2[j] ){
	//	cout<<"matched";
			pos+=1;
			i++;
			j++;
		}
		else
			{
			j++;
	//	cout<<"unmatched"<<endl;
		}
	}
	cout<<pos;
	
}
