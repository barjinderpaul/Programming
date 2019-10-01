#include<bits/stdc++.h>
using namespace std;
int main(){
	//Lower case letters
	string s1;
	cin>>s1;
	int count[26] = {0};
	for(int i = 0;i<s1.length();i++)
		count[s1[i] - 'a']++;
	for(int i=0;i<26;i++){
		if(count[i] > 0)
			cout<< (char)(i+97) << " has frequency = "<<count[i]<<endl;
	}
	
}
