//N-th non-square number;
#include<bits/stdc++.h>
using namespace std;
vector<int> numbers;
void nthSquareNumber(int n){
		for(int i=1;i<=n;i++)
				if(sqrt(i) != floor(sqrt(i)))
					numbers.push_back(i);	
}	

int main(){
	int n;
	cin>>n;
	nthSquareNumber(1000);
	cout<<numbers[n-1];
}
