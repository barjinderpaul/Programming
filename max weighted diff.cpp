#include<bits/stdc++.h>
using std::endl;
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t,n,k;
	std::cin>>t;
	while(t--){
		std::cin>>n>>k;
		int a[n];
		for(int i=0;i<n;i++){
			std::cin>>a[i];
		}
		int64_t sumk = 0;
		int64_t sumf = 0;
		std::sort(a,a+n);
		int64_t first=0;
		for(int i=0;i<n;i++){
			if(i<k)
				sumk+=a[i];
			else
				sumf+=a[i];
		}
		first = abs(sumf-sumk);
		sumf=0;
		int64_t second=0;
		int64_t aa=0;
		for(int i=n-1;i>=0;i--){
			if(i<n-k)
				aa+=a[i];
			else
				sumf+=a[i];
		}
		second=abs(sumf-aa);
		std::cout<<std::max(first,second)<<endl;
		
	}
}
