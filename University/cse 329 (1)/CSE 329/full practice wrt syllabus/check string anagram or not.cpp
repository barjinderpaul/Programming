#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	int count[26] = {0},count2[26] = {0};
	for(int i=0;i<s1.length();i++)
		count[s1[i] - 'a']++;
	for(int i=0;i<s2.length();i++)
		count2[s2[i] - 'a']++;
	int flag = 0;
	for(int i=0;i<s1.length();i++){
		if(count[i] == count2[i])
			flag = 0;
		else
			flag = 1;
	}
	if(flag == 1)
		cout<<"String is not anagram "<<endl;
	else
		cout<<"String is anagram "<<endl;
		
}
