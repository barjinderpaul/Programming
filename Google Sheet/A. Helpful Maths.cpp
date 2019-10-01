#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	vector<int> numbers;
	for(int i=0;i<s.length();i++)
	{
		if(s[i] != '+')
			{
				if(s[i]=='1')
					numbers.push_back(1);
				else if(s[i] == '2')
					numbers.push_back(2);
				else if(s[i] == '3')
					numbers.push_back(3);
			}
		
	}
	sort(numbers.begin(),numbers.end());
	cout<<numbers[0];
	for(int i=1;i<numbers.size();i++)
		cout<<"+"<<numbers[i];
}
