//also checks substring if the length of first is high;

#include<bits/stdc++.h>
using namespace std;
int main(){
	string text;
	string pattern;
	cin>>text>>pattern;
	int tlength = text.length();
	int plength = pattern.length();
	for(int i=0;i<(tlength-plength+1);i++){
		int j;
		for(j=0;j<plength;j++)
			if(text[i+j]!=pattern[j])
				break;
		if(j==plength)
			{
				cout<<"At index = "<<i<<endl;
				//i = i + plength; //if match move window by plength
			}
		//else if(j==0)
		//	i+=1;
		//else
		//	i=i+j; //slide pattern by j length
	}
	
}
