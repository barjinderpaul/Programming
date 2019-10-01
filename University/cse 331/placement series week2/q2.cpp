#include<bits/stdc++.h>
using namespace std;
int main(){
	size_t t,n;
   	cin>>t;
    size_t playerNumber=1;
    size_t a[10002];
    while(t--){
    	multiset<size_t> ms;
		size_t maxx=-1,first=1,second=4;
    	cout<<"Case #"<<playerNumber<<":"<<"\n";
   		cin>>n;
   		for(size_t i=1;i<=n;i++)
    	   cin>>a[i];
    	for(size_t i=1;i<=n-3;i++){
	       ms.clear(); 
    	   for(size_t j=i;j<=n;j++){
	            ms.insert(a[j]);
          		if(ms.size()>=4){
	 	            auto iterator=ms.begin();
	            	size_t xorv=0;
	            	xorv= xorv^(*iterator);iterator++;
	            	xorv= xorv^(*iterator);iterator++;
	            	xorv= xorv^(*iterator);iterator++;
	            	xorv= xorv^(*iterator);iterator++;
	              	if(xorv>maxx){  
	                 maxx=xorv;
	                 first=i,second=j;
	         		}
	         		else if(xorv==maxx && second-first<=j-i)
	            		   first=i;second=j;
        		}
     		}
  		}
   	cout<<first<<" "<<second<<" "<<maxx<<"\n";
   	playerNumber+=1;
 	}
 	return 0;
 
 }
