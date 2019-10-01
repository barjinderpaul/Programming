#include <bits/stdc++.h>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t,n,k,value;
	cin>>t;
	while(t--){
	cin>>n>>k;
	vector<int> v;
	for(int i=0;i<n;i++)
		{
			cin>>value;
			v.push_back(value);
		
		}
		sort(v.begin(),v.end());
	int i=0;
	while( i<v.size() ){
	//	cout<<" in while i = "<<i<<endl;
	//	cout<<" i = "<<i<<endl;
	if(i == v.size()-1)
		break;
	if (  min(v[i],v[i+1]) > k  )
			{
			//	cout<< " i = "<<i<<endl;
				v[i] = v[i] - 1;
				v[i+1] = v[i+1] - 1;
				i = i;
			}
		else{
			i++;
		}
	}
	cout<<accumulate(v.begin(), v.end(), 0)<<endl;
	
	}
    return 0;
}
