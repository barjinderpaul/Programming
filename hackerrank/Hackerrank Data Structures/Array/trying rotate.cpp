#include <iostream>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t>0){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++){
	        cin>>a[i];
	    }
	    int d;
	    cin>>d;
	    int temp[d];
	    if(n>d){
	        for(int i=0;i<d;i++){
	            temp[i]=a[i];
	            a[i]=a[i+1];
	        }
	    }
	    if(n<=d){
	    	d=d%n;
	    	for(int i=0;i<d;i++){
	            temp[i]=a[i];
	            a[i]=a[i+1];
	    }
	        }
	    for(int i=d;i<n;i++){
	    	cout<<a[i]<<" ";
	    }
	    for(int i=0;i<d;i++){
	    	cout<<temp[i]<<" ";
	    }
	    t--;
	    
	}
	return 0;
}
