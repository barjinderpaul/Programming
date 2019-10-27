	#include<bits/stdc++.h>
	using namespace std;
	int main(){
		size_t minPos,maxPos,n;
		cin>>n;
		size_t a[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i] == 1)
				minPos = i;
			if(a[i] == n)
				maxPos = i;
		}
		if(minPos == 0 || minPos == n-1 || maxPos == 0 || maxPos == n-1)
			{
			cout<<n-1;
			return 0;
			}
			size_t q,w,e,r;
			q = minPos; w = n - minPos - 1; e = maxPos; r = n - 1 -maxPos;
			cout<<max(max(q,w),max(e,r));
	}
