#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,r,ans;
	vector<int> numbers;
	cin>>k>>r;
	if(k%10 == 0)
	{
		cout<<"1";
		return 0;
	}
	for(int i=1;i<=9;i++){
		ans = (i*k)%10;
		if( ans == 0 )
			{
				cout<<i;
				return 0;
			}
		if( ans == r )
			{
				cout<<i;
				return 0;
			}
		else
			numbers.push_back(ans);
	}
	cout<<lower_bound(numbers.begin(),numbers.end(),r)-numbers.begin();
}
