#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,countNeg,countZeroes,maxNeg,mul;
	cin>>t;
	while(t--){
		mul = 1;
		maxNeg=-1;
		countNeg = 0;
		countZeroes = 0;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i] == 0)
				countZeroes++;
			else if(a[i] < 0)
			{
				countNeg++;
				if(a[i] < maxNeg)
					maxNeg = a[i];
			}
		}
		if( countZeros==0 && countNeg%2 == 0 )
			{
				for(int i=0;i<n;i++){
					mul *= a[i];
				}
			cout<<mul;
			return 0;
			}
		else if( countZeroes==0 && countNeg%2!=0)
	}
}
