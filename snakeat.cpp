#include<bits/stdc++.h>

int main(){
    std::ios_base::sync_with_stdio(false);
	int t,n,q;
	std::cin>>t;
	while(t--){
		std::cin>>n>>q;
		int64_t a[n];
		for(int i=0;i<n;i++)
			std::cin>>a[i];
		
		int64_t k;
		int mark[n+1];
		
		std::sort(a,a+n,std::greater<int>());
		while(q--){
			std::cin>>k;
			//cout<<"in k = "<<k<<endl;
			int count=0;
			for(int i=0;i<n;i++){
				mark[i]=0;
			}
			for(int i=0;i<n;i++){
				//cout<<"in k = "<<k<<endl;
				//cout<<"a[i] = "<<a[i]<<endl;		
				if(a[i]>=k){
				//	cout<<"inc count"<<endl;
					count+=1;
					mark[i]=1;
					continue;
				}
				else{
					//cout<<"in k = "<<k<<endl;			
					if( (a[i]+(n-(i+1)))<k){
				//		cout<<"a[i] in break = "<<a[i]<<endl;
				//		cout<<" i ="<<i<<endl;
				//		cout<<(a[i]+(n-(i+1)))<<"value in break"<<endl;
						break;
					}
					else{
						if(mark[i]==0){
							int64_t snake=a[i];
							while(snake<k){
								mark[i]=1;
								snake+=1;
								i++;
				//				cout<<"in snake a[i] = "<<a[i]<<endl;
							}
							count+=1;						}						
					}
				}
			}
			std::cout<<count<<"\n";
		}
	}
}
