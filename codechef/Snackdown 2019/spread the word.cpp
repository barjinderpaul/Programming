#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	uint64_t t,n;
	cin>>t;
	while(t-- > 0){
		cin>>n;
		uint64_t flag=11, a[n],sum=0,days=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
			sum+=a[i];	
		}
		uint64_t total = a[0], breakingPoint = a[0],i=1,j=0;
		while(a[j]==0)
			{
				days+=1;
				breakingPoint+=1;
				j++;
			}
		
		for(i;i<=breakingPoint;i++){
					total+=a[i];
					if(total>=sum)
					{
						flag=12;
						break;
					}
					
					if(i == breakingPoint)
				{	
						days+=1;
						breakingPoint += total;
				}
			//	cout<<"at i : "<<i<<" breaking Point : "<<breakingPoint<<" total = "<<total <<" sum : "<<sum<<endl;
				}
				cout<<days+1<<endl;
	}
}
