#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int flag=0;
		uint64_t value;
			uint64_t n;
			cin>>n;
			vector<uint64_t>numbers;
			for(int i = 0;i<n;i++)
				{
					cin>>value;
					numbers.push_back(value);
				}
			
			if (is_sorted(numbers.begin(), numbers.end())) {
					cout<<"YES"<<endl;
					flag = 0;
				}
				else
			{
						
			for(int i=1;i<=n;i++){
				//If vector sorted or not
				
				//rotate vector right by i
				rotate(numbers.begin(), numbers.begin()+numbers.size()-1, numbers.end()); 
				
				//after array sorted
			//	cout<<"rotated aray times = "<<i<<endl;
			//	for(int i=0;i<numbers.size();i++)
				//		cout<<numbers[i]<<" ";
			
			//	cout<<endl;
			
				if (is_sorted(numbers.begin(), numbers.end())) {
					cout<<"YES"<<endl;
					flag = 0;
					break;
				}
				else
					flag=1;
				//vector re-rotate towards left;					
			//	rotate(numbers.begin(), numbers.begin()+i, numbers.end()); 
	}
	if(flag==1)
		{
			cout<<"NO"<<endl;
		
		}
	}
		}

}
