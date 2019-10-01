#include<bits/stdc++.h>
using namespace std;

void print01(string num, int numberOfOnes, int remPlaces){
	//cout<<"num before ppr\\rint = "<<num<<endl;

	if(remPlaces==0){
//		cout<<num<<" "<<endl;
		cout<<num<<" ";
		return;
	}
//	cout<<"num before 1 = "<<num<<endl;
	print01(num+"1",numberOfOnes+1,remPlaces-1);
//	cout<<"num after 1 = "<<num<<endl;

	if(0<numberOfOnes){
//		cout<<"num in if = "<<num<<endl;
		print01(num+"0",numberOfOnes-1,remPlaces-1);
	
	}
}


void printN(int n){
	string str="";
	print01(str,0,n);
}

int main(){
	int n;
	cin>>n;
	printN(n);	
}
