#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
typedef long long int lli;
int main(){
	lli t;
	cin>>t;
	while(t--){
	    lli n,k;
	    cin>>n>>k;
	    lli a[n];
	    for(lli i=0;i<n;i++){
	        cin>>a[i];
	    }
	    //sort(a,a+n);
	    //cout<<"sorted "<<"\n";
	    lli beautiful=0,m,temp,x,f;
	   
	for (lli i=0; i <n; i++) { 
        for (lli j=i; j<n; j++) { 
        	lli occ[2002]={0}, t[j-i+1];
        	lli ss=0;
        	for (lli k=i; k<=j; k++) {
                t[ss]=a[k];
				occ[a[k]]++;
				ss++;
            }
            lli lenn = j-i+1;
            sort(t,t+lenn);
        	//cout<<"array b\n";
            //for(lli z=0;z<lenn;z++)
            //	cout<<t[z]<<" ";
            //cout<<"after array b\n";
        	//cout<<"lenn , k = "<<lenn<<" "<<k;	
        	int l = l%lenn;
        	if(l!=0)
	            x  = t[k%lenn];
	        else
	        	x = t[lenn-1];
			//cout<<"x = "<<x<<"\n";
			f = occ[x];
        	if(occ[f]>=1)
        		beautiful+=1; 
        } 
    } 
	cout<<beautiful<<"\n";
}
/*
	for (lli i=0; i <n; i++) { 
        for (lli j=i; j<n; j++) { 
        	cout<<"i, j = "<<i<<" "<<j<<"\n";
        	lli occ[2002]={0}, t[j-i+1];
        	lli ss=0;
        	
            for (lli k=i; k<=j; k++) {
                cout << a[k] << " ";
				t[ss]=a[k];
				cout<<"t[ss] = "<<t[ss]<<"\n"; 
				ss++;
                occ[a[k]]++;
            }
            lli lenn = j-i+1;
        	sort(t,t+(j-i+1));
            cout<<"array b\n";
            for(lli z=0;z<lenn;z++)
            	cout<<t[z]<<" ";
            cout<<"after array b\n";
            float kf = k,lennf=lenn;
            m = ceil(kf/lennf);
            cout<<"m = "<<m<<"\n";
            cout<<"lenn = "<<lenn<<"\n";
            temp = (lenn*m)%k;
            cout<<"temp = "<<temp<<"\n";
            if(temp==0){
            	if(lenn==1)
            		x = t[0];
            	else
					x = t[lenn-1];
            
			}
            else
            	x = t[temp];
            cout<<"t[temp] = "<<t[temp]<<"\n";
        	cout<<"x = "<<x<<"\n";
        	f = occ[x];
        	cout<<"f = "<<f<<"\n";
        	if(occ[f]>=1)
        		beautiful+=1;
            cout << endl; 
        } 
    } 
*/
}
