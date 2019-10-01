#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int count1[26] = {0};
	for(int i=0;i<s1.length();i++)
		count1[s1[i] - 'a']++;
	for(int i=0;i<s2.length();i++)
		count1[s2[i]-'a']--;
	int result = 0;

/*
	cout<<"elements "<<endl;

	for(int i=0;i<26;i++)
		cout<<count1[i]<<" ";
	cout<<endl;
//	for(int i=0;i<26;i++)
//		cout<<count2[i]<<" ";
	cout<<endl;
*/
	for(int i=0;i<s1.length();i++)
		result+=abs(count1[i]);
	cout<<result<<endl;	
}

