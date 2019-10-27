#include<bits/stdc++.h>
using namespace std;
#define lli long long int
lli read_int(){
	char charr;
	bool beginn=false,negative=false;
	lli ret=0;
	while(true){
		charr=getchar();
		if((charr-'0'<0 || charr-'0'>9) && charr!='-' && !beginn){
			continue;
		}
		if((charr-'0'<0 || charr-'0'>9) && charr!='-' && beginn){
			break;
		}
		if(beginn)ret*=10;
		beginn=true;
		if(charr=='-')negative=true;
		else ret+=charr-'0';
	}
	if(!negative)
		return ret;
	else
		return -ret;
}
int main()
{
	uint64_t n,median;
	cin>>n>>median;
	lli  N[n], M[median],i,j,summ=0,cBreak=0,ckbreak=(n+median)-1;            
	set <lli, greater <lli> > st;    
	for(i=0;i<n;i++)
		 N[i]= read_int();
	for(i=0;i<median;i++)
		 M[i]= read_int();
	lli med=(median%2==0)?median/2:(median/2)+1;
	for(i=0;i<n;i++){
		for(j=0;j<median;j++){
			summ=N[i]+M[j];
			lli slength=st.size();
			st.insert(summ);
			lli slength1=st.size();
				
			if(slength!=slength1){
				cout<<i<<" "<<j<<endl;
				cBreak+=1;
				}  
			if(cBreak==ckbreak)
				break;
		}
		if(cBreak==ckbreak)
				break;
	}
} 
