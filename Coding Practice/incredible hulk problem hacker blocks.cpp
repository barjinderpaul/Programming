#include <bits/stdc++.h>
using namespace std;
#define max 100000
int main() {
    int a[max],j=0,length=0,n,sum=0,count=0;
    for(int i=2;i<max;i++){
    	if(i && (!(i&(i-1))))
    		{
    			a[j]=i;
				j++;
				length++;	
    		}
    	}
    
    for(int i=0;i<length;i++){
    	cout<<a[i]<<endl;
	}		
//User enters number :
cin>>n;
	for(int i=0;i<length;i++){
	for(int j=0;j<length;j++){
	
	if(n == a[j]){
		cout<<"1"<<endl;
		break;
		}
else{
		for(int k=0;k<length;i++){
			if(a[k]>n){
				i--;
				while(sum!=n){
					sum+=k;
					count++;
					k--;
					if((n-sum)==1){
						sum=sum+1;
						count++;
					}
				}}
			}
	}
		cout<<count;
	}
}
    
}

