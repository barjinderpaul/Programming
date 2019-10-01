#include<bits/stdc++.h>
using namespace std;
int main(){
	/*
	vector<int>aa;
	string str("");
	int n=1234;
	stringstream ss;
	ss << n;
	str.append(ss.str());
	cout<<" s = "<<str<<endl;
	vector<string> final;
	aa.push_back(1);
	aa.push_back(2);
	aa.push_back(3);
	aa.push_back(4);	
	sort(aa.begin(),aa.end(),greater<int>());
	prev_permutation(aa.begin(),aa.end());
	for(int i=0;i<4;i++)
		cout<<aa[i]<<" ";
	cout<<endl<<"next"<<endl;
	prev_permutation(aa.begin(),aa.end());
	for(int i=0;i<4;i++)
		cout<<aa[i]<<" ";
	*/
	vector<int>vec1;
	vec1.push_back(1);
	vec1.push_back(2);
	vec1.push_back(3);
std::rotate(vec1.begin(), vec1.begin()+1, vec1.end());
 	for(int i=0;i<3;i++)
		cout<<vec1[i]<<" ";
	cout<<"next"<<endl;
	std::rotate(vec1.begin(), vec1.begin()+1, vec1.end());
 	for(int i=0;i<3;i++)
		cout<<vec1[i]<<" ";

}
