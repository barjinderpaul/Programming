#include<bits/stdc++.h>
using namespace std;
int main(){
	string s,s1,s2;
	cin>>s;
	s1 = s;
	s2 = s;
	stable_sort(s1.begin(),s1.end());
	cout<<"ascending = "<<s1<<endl;
	stable_sort(s2.begin(),s2.end(),greater<char>());
	cout<<"desc = "<<s2;
}
