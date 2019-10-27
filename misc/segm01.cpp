#include<bits/stdc++.h>
int main(){
	std::ios_base::sync_with_stdio(false);
	std::cin.tie(NULL);
	int t;
	std::cin>>t;
	std::string s;
	while(t--){
		std::cin>>s;
		int flag1=0,flag0=0,flagprint=0,flag2=0;
		std::cout<<"in t="<<std::endl;
		for(int i=0;i<s.length();i++){
			std::cout<<"in for"<<"\n";
			if(s[i]=='1' && flag1==0){
				std::cout<<"first 1 occurence at = "<<i<<"\n";
				flag1=1;
			}
			else if(flag1==1 && flag2==0){
				 if(s[i]==0){
					std::cout<<"first after zero 1 occurence"<<"\n";
					flag0=1;
					flag2=1;
				}
			}
			else if(flag1==1 && flag0==1 && s[i]=='1'){
				flagprint=1;
				std::cout<<"in flagprint"<<"\n";
				break;
			}
		}
		if(flagprint==0)
			std::cout<<"YES"<<"\n";
		else
			std::cout<<"NO"<<"\n";
	}
}
