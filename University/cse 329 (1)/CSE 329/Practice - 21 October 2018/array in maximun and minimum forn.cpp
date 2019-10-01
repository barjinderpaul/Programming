#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){	
	int n,value;
	cin>>n;
	vector<int> numbers;
	for(int i=0;i<n;i++)
		{		
		cin>>value;
		numbers.push_back(value);		
		}
	stable_sort(numbers.begin(),numbers.end());
		cout<<"elements in the array ="<<endl;
	for(int i=0;i<n;i++)
		cout<<numbers[i]<<" ";
	int j=0,k=n;
	for(int i=0;i<n;i++)
		{
			cout<<numbers[k-1]<<" "<<numbers[j];
			j++;
			k--;
		}
}
