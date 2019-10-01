#include<bits/stdc++.h>
using namespace std;
int main(){

	int t,n,k;
	cin>>t;
	while(t--){
		cin>>n>>k;
		char al[] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
		int count=0,i=0;
		while(count!=n){
			if(i==k)
				i=0;
			cout<<al[i];
			i++;
			count+=1;
		}
		cout<<endl;
	}

}

