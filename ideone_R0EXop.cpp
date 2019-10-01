#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int main()
{
	int t,n,k;
	cin>>t;
	while(t--){
		int value;
	int prefixSum = 0; 
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>value;
		v.push_back(value);
		
	}
	unordered_set<int> s(v.begin(), v.end());
    v.assign(s.begin(), s.end());

	//cout<<"done";
    for (auto it = v.cbegin(); it != v.cend(); ++it)
        prefixSum+= *it;
	cout<<prefixSum<<endl;
		
	}
    return 0;
}
