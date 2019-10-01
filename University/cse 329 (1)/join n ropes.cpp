#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,value,total=0;
	vector<int> numbers;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>value;
		numbers.push_back(value);
	}
	/*sort(numbers.begin(),numbers.end());
	int prefixSum,cost=0,total=0;
	prefixSum = numbers[0];
	for(int i=1;i<n;i++){
		prefixSum+=numbers[i];
		cost = prefixSum;
		cout<<cost<<" ";
		total+=cost;
	}
	cout<<endl<<"total = "<<total;
	*/
	while(numbers.size()>1){
		sort(numbers.begin(),numbers.end());
		total+= numbers[0] + numbers[1];
		numbers.push_back(numbers[0] + numbers[1]);
		numbers.erase(numbers.begin(),numbers.begin()+2);
	}
	cout<<total;
}
