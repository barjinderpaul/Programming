#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int n,value;
	cin>>n;
	vector<int> numbers;
	for(int i=0;i<n;i++){
		cin>>value;
		numbers.push_back(value);	
	}
	int rotateBy;
	cin>>rotateBy;
	rotate(numbers.begin(),numbers.begin()+rotateBy,numbers.end());
	cout<<"array rotated left by "<<rotateBy<<endl;
	for(int i=0;i<numbers.size();i++)
		cout<<numbers[i]<< " ";
	cout<<endl;
	rotate(numbers.begin(),numbers.begin()+numbers.size()-rotateBy,numbers.end());
	cout<<"original array = "<<endl;
	for(int i=0;i<numbers.size();i++)
		cout<<numbers[i]<< " ";
	cout<<endl;
	rotate(numbers.begin(),numbers.begin()+numbers.size()-rotateBy,numbers.end());
	cout<<"array rotated right by "<<rotateBy<<endl;
	for(int i=0;i<numbers.size();i++)
		cout<<numbers[i]<< " ";
	
}
