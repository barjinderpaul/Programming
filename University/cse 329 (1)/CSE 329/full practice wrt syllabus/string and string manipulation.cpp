#include<bits/stdc++.h>
using namespace std;
int main(){
	string s1;
	string::reverse_iterator  it1;
	cin>>s1;
	cout<<"string from beginning " ;
	cout<<s1;
	cout<<endl<<"string from reverse " ;
	for(it1 = s1.rbegin() ; it1!=s1.rend();it1++)
		cout<<*it1;
	cout<<endl<<"String capacity = "<<endl;
	cout<<s1.capacity()<<endl;
	cout<<"String size = "<<endl;
	cout<<s1.size()<<endl;
	cout<<"After shrink_to_fit()"<<endl;
	s1.shrink_to_fit();
	cout<<"capacity = "<<s1.capacity()<<" size = "<<s1.size()<<endl;	
}
