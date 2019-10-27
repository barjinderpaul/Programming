#include<bits/stdc++.h>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int64_t l1,r1,l2,r2;
	int64_t q;
	std::cin>>q;
	while(q--){
		std::cin>>l1>>r1>>l2>>r2;
		if( ((l1+r1)/2) != ((l2+r2)/2) ){
			std::cout<<(l1+r1)/2<<" "<<(l2+r2)/2<<"\n";
		}else{
			std::cout<<l1<<" "<<r2<<"\n";
		}
	}
}
