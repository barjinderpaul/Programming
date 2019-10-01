#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	int countLower = 0,countUpper = 0;
	cin>>s1;
	for(int i=0;i<s1.length();i++){
		char ch = s1[i];
		int chL = (int)ch;
		if( chL >= 97 && chL <=122 )
			countLower+=1;
		else if( chL>=65 && chL <= 90)
			countUpper += 1;
			}
		if(countLower == countUpper)
		{
			transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
			cout<<s1;
		}
		else if(countLower > countUpper)
		{
			transform(s1.begin(), s1.end(), s1.begin(), ::tolower);				
			cout<<s1;
		}
		else
		{
			transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
			cout<<s1;
		}
}
