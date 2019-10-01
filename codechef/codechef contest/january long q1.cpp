#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,flag=0;
	cin>>t;
	cin.ignore();
	while(t--){
		string str;
		while(cin>>str && str!="\n" ){
		
			if(str=="not"){
				flag=1;
				cout<<"Real Fancy"<<endl;
				break;
			}
		
		
		}
		if(flag!=1)
				cout<<"NO";	
		
	
}

}
