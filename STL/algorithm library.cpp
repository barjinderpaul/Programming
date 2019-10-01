//Algorithm Library :
/*
1. sort(a.begin(),a.end());	//ascending order
2. reverse(a.begin(),a.end());  //descending order
3. sort(a.begin(),a.end(),greater<int>());	//descending order
4. max_element(a.begin(),a.end());	//max element
5. min_element(a.begin(),a.end());	//min element
6. accumulate(a.begin(),a.end(),0); //starting,end,inititalValueOfSun
7. count(a.begin(),a.end(),number)l
8. a.erase(a.begin() + 0); //erases number at position a.begin() + 0;
9. a.erase(unique(a.begin(),a.end()),a.end()); //removes duplicates;
10. distance(a.begin(),max_element(a.begin(),a.end()); //distance between starting and maximum element;

*/
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	vector<int>a{34,232,232,434,42,435,23};
	cout<<"Elements in the array ";
	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<"Sorted array ";
	sort(a.begin(),a.end()); //sort vector ascending order
	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<"Array reversed : ";
	reverse(a.begin(),a.end()); //sort vector descending order;
	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	cout<<"Array reversed 2 : ";
	sort(a.begin(),a.end(),greater<int>()); //sort vector descending order 2
	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<"Max element :" ;
	cout<<*max_element(a.begin(),a.end()); //max element in vector;
	cout<<endl;
	cout<<"Min element :";
	cout<<*min_element(a.begin(),a.end()); //min element in vector;
	cout<<endl;
	cout<<"Array elements Sum :";
	cout<<accumulate(a.begin(),a.end(),0); //sum of array ;
	cout<<endl;
	
	cout<<"count of 232 : "; 
	cout<<count(a.begin(),a.end(),232); //count the number of elements;
	cout<<endl;
	cout<<"find 232 : ";
	sort(a.begin(),a.end());
	cout<<binary_search(a.begin(),a.end(),232);
	cout<<endl;
	
	cout<<"Erasing :";
	cout<<"Before erasing: ";
	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl<<"After erasing 1st element : ";
	a.erase(a.begin() + 0);
	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;
	
	cout<<"Unique Elements in an array : ";

	a.erase(unique(a.begin(),a.end()),a.end()); //removes duplicates

	for(int i=0; i<a.size();i++)
		cout<<a[i]<<" ";
	cout<<endl;

	cout<<"finding max distance in the array"<<endl;
	cout<<"max distance between first and last element in array :";
	cout<<distance(a.begin(),max_element(a.begin(),a.end())); 
	cout<<endl<<"distance between min and max element of array : ";
	cout<<distance(min_element(a.begin(),a.end()),max_element(a.begin(),a.end()));
	
}

