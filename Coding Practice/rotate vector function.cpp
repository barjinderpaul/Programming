//Array rotate :
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a{1,2,3,4,5};
	rotate(a.begin(), a.begin()+3, a.end()); //Left Rotate
	for(int i=0;i<5;i++)
		cout<<a[i]<< " ";
	vector<int> b{1,2,3,4,5};
	rotate(b.begin(),b.begin()+b.size()-3,b.end()); 	//right rotate
	cout<<endl;
	for(int i=0;i<5;i++)
		cout<<b[i]<< " ";
	
}
