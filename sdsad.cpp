	#include<bits/stdc++.h>
	int main(){
		std::ios_base::sync_with_stdio(false);
		std::cin.tie(NULL);
		int n;
		std::cin>>n;
		int64_t a[n];
		for(int i=0;i<n;i++)
			std::cin>>a[i];
	
		std::vector<int64_t> final;
		std::vector<int64_t> possible;
		for(int i=0;i<n;i++){
			int nodiv=0;
			int countdiv=0;
			for(int j=0;j<n;j++){
				if(i==j)
					continue;
				if(a[i]==a[j])
					continue;
				else{
					if(a[j]%a[i]==0)
					{
						nodiv=1;
						countdiv+=1;
					}
				}
				
			}
			if(nodiv==0){
					final.push_back(a[i]);
			}
			if(nodiv==1 && countdiv==1){
				possible.push_back(a[i]);
			}
		}
		//std::cout<<"size = "<<final.size()<<"\n";
		int i=1;
		for(int64_t x : final){
			if(i>2)
				break;
			std::cout<<x<<" ";
			i+=1;
		}
		if(final.size()==1){
			auto it=possible.begin();
			std::cout<<*it;
		}
	}
