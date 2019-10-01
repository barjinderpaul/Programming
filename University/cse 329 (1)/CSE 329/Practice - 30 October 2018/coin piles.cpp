#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,k,value,count;
	cin>>t;
	while(t--){
		count=0;
		//cout<<"count = "<<count<<endl;
		cin>>n>>k;
		int a[n];
		cin>>a[0];
		for(int i=1;i<n;i++){
			cin>>a[i];
			//	cout<<"count = "<<count<<endl;
			if( abs(a[i-1] - a[i]) > k )
				{
			//			cout<<"count = "<<count<<endl;
					while( abs(a[i-1] - a[i]) > k ){
						//cout<<"count = in while "<<count<<endl;
						count+=1;
						if( a[i-1] > a[i] )
							a[i-1] -= 1;
						else if(a[i] > a[i-1])
							a[i]-=1;
					}
				}
		}
		
		cout<<count<<endl;
	}
}
