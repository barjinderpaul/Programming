#include <bits/stdc++.h> 
using namespace std; 
typedef long long int lli;
bool is2( lli num) 
{ 
    if(num == 0)
        return false;
    else
    {
        while(num % 2 == 0) num /= 2;
        return (num == 1);
        } 
} 

int main() 
{ 
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
    lli t,n;
    cin>>t;
    while(t--){
    	cin>>n;
    	int flag=0;
    	lli arr[n];
    	for(lli i=0;i<n;i++)
    		cin>>arr[i];
				 
		if (n == 1)  {
        	if(is2(arr[0])){
        	cout<<"YES"<<endl;
        	continue;
        	}else{
        		cout<<"NO"<<endl;
        		continue;
        	}
		}
	 else{
		
		lli whole = 0; 
		for (lli i = 0; i < 32; i++) 
		    whole = whole | (1 << i); 
		for (lli i = 0; i < 32; i++) { 
		
		    lli res = whole; 
		    for (lli j = 0; j < n; j++) { 
		        if (arr[j] & (1 << i)) 
		            res = res & arr[j]; 
		    } 
		    if (is2(res)) {
		        cout<<"YES"<<endl; 
		        flag=1;
		        break;
		    } 

		}
	if(flag!=1)	 
		cout<<"NO"<<endl;
    }
     }

    return 0; 
} 
