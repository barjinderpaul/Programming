#include<iostream>
#include<vector>

int calcFib(int n){
	std::vector<int> series;
	series.push_back(0);
	series.push_back(1);
	std::cout<<0<<" "<<1<<" ";
	for(int i=2 ; i<=n ; i++){
		series.push_back(i) = series.at(i-1) + series.at(i-2);
		std::cout<<series.at(i);
	}
}



int main(){
	int n;
	std::cin>>n;
	calcFib(n);
}
