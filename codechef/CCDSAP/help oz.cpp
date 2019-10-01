#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int m;
	cin>>m;
	long long int a[m],maxx=-1;
	for(int i=0;i<m;i++){
		cin>>a[i];
	    if(a[i]>maxx)
	        maxx=a[i];
	}
	vector<long long int> numbers;
	for(long long int k=2;k<=maxx;k++){
	    int flag=1;
	    long long int res = a[0]%k; 
	    for(long long int l=1;l<m;l++){
	        if( a[l]%k !=res ){
	            flag=0;
	            break;
	        }
	    }
	    if(flag==1){
	        numbers.push_back(k);
	    }
	}
	for(long long int i=0;i<numbers.size();i++)
	    cout<<numbers[i]<<" ";
}
