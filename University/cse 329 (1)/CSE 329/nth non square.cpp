#include<bits/stdc++.h>
using namespace std;
vector<int> nonSquares;

void storeNonSquares(int n){
	for(int i=1;i<=n;i++)
		if(floor(sqrt(i) != ceil(sqrt(i))))
			nonSquares.push_back(i);
}


int main(){
	storeNonSquares(10000);
	int n;
	cin>>n;
	cout<<nonSquares[n-1]<<endl;
}
