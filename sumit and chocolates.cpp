#include<bits/stdc++.h>
using namespace std;
int main(){
    uint64_t n,q,value,choco;
    cin>>n;
	uint64_t a[n];
    
	cin>>value;
    a[0] = value;
    for(uint64_t i=1;i<n;i++)
   {
        cin>>value;
        a[i] = value + a[i-1];
       }
    cin>>q;
    while(q-- > 0){
        cin>>choco;
        int low=0,high=n-1;
        while(low<=high){
            int mid = (low+high)/2;
            
            if(a[mid] > choco)
                high = mid - 1;
            else
                low = mid + 1;
            if(a[mid] == choco )
            	
              { 
			  
			   cout<<mid+1<<endl;
                break;
              }
            if(a[mid] < choco && choco <= a[mid+1] )
            
                {cout<<mid+2<<endl;
                 break;
                }
            
        }
    }
    
}
