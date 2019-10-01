//Recursion  + Dynamic Programming :
#include<bits/stdc++.h>
using namespace std;

//Time complexity = O(n);	//by finding complexity via recursion tree method;
//Space complexity = O(n);	//by making a tree and then finding the depth , depth = space complexity

int fact(int num){
	if(num == 1)
		return 1;
	else
		return num*fact(num-1);
}

int main(){
	int num;
	cin>>num;
	cout<<fact(num);
}
