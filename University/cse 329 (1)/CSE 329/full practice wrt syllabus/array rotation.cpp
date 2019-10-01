#include<bits/stdc++.h>
using namespace std;

void leftRotateByOne(vector<int> &numbers){
	int temp = numbers[0],i;
	for(i=0;i<numbers.size()-1;i++){
			numbers[i] = numbers[i+1];
	}
	numbers[i] = temp;	
	for(int i=0;i<numbers.size();i++){
		cout<<numbers.at(i)<<" ";
	}
	cout<<endl;
}

void leftRotate(vector<int> &numbers,int rotateBy){
		for(int i=0;i<rotateBy;i++){
			leftRotateByOne(numbers);
		}
		
}

int main(){
	int n;
	cin>>n;
	vector<int>numbers;
	int input;
	for(int i=0;i<n;i++){
		cin>>input;
		numbers.push_back(input);
	}
	int rotateBy;
	cin>>rotateBy;
	
	//STL Implementation :
	cout<<"STL Implementation "<<endl;
	cout<<"Taking absolute Values = "<<endl;
	cout<<"Left Rotate" <<endl;
	rotate(numbers.begin(),numbers.begin()+abs(rotateBy),numbers.end());
	for(int i=0;i<numbers.size();i++)
		cout<<numbers.at(i)<<" ";
	cout<<endl<<"re rotating right by "<<rotateBy<<endl;
	rotate(numbers.begin(),numbers.begin()+numbers.size()-abs(rotateBy),numbers.end());
		for(int i=0;i<numbers.size();i++)
		cout<<numbers[i]<<" ";

	//Rotating one by one and displaying = O(n*d);
	cout<<endl<<"rotating one by one"<<endl;
	leftRotate(numbers,rotateBy);

}

