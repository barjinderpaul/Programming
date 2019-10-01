#include<bits/stdc++.h>
using namespace std;
#define lli long long int 
int main(){
	lli n;
	cin>>n;
	lli a[n];
	lli maxx=0;
	bool all = false;
	for(lli i= 0;i<n;i++){
		cin>>a[i];
		if(a[i]>maxx)
			maxx=a[i];
		if(i>0){
			if(a[i]==a[i-1])
				all=true;
			else
				all=false;
		}
	}
	if(all==true)
		{
			cout<<"YES";
			return 0;
		}
	int fall=0,flag=0,fallequal=0,fnoequal=1,fequalmax=0,fdoubleEqual=0,fdoubleEqualf=0,fsingleEqual=0;
	/*
	while((fallequal!=1 || fnoequal!=1) && fdoubleEqualf==0){
		cout<<"in while"<<endl;
		
		for(lli z=0;z<n;z++)
			{
				if(z==n-1)
					break;
				if(a[z]==a[z+1])
					fall=1;
				else{
					fall=0;
					break;
				}
		}
		if(fall==1)
			{
				cout<<"YES";
				return 0;
			}
		for(lli j=0;j<n;j++){
			if(j==n-1)
				break;
			//else if(a[j]==maxx && fdoubleEqualf==0)
			//	fequalmax=1;
			else if(a[j]==a[j+1] /*&& fequalmax==0//){
				a[j]+=1;a[j+1]+=1;
				fnoequal=0;
				fsingleEqual=1;
				fallequal=1;
			}
			else
				fnoequal=1;
			
			if(abs(a[j] -a[j+1])==2){
				fdoubleEqual=1;
				flag=1;
			}
			
		}
		if(flag==1)
			fdoubleEqualf=0;
		if(fdoubleEqual==1 && fsingleEqual==0){
			for(lli c=0;c<n;c++){
				if(c==n-1)
					break;
				if( a[c] -a[c+1]==2 )
					a[c+1]+=2;
				else if(a[c+1]-a[c]==2)
					a[c]+=2;
			}
			fdoubleEqualf=1;
		}
		if(fsingleEqual==0 && fdoubleEqual==0)
			fnoequal=1;
			
		cout<<"Elements"<<endl;
		for(int i=0;i<n;i++)
			cout<<a[i]<<" ";
	}
	*/
	int i=0;
	while(1){
		int fall=0,fnewdouble=0,fnoe=0,fnewsingle=0,ff=0;
		//cout<<"in while"<<endl;
		//cout<<" before Elements"<<endl;
		//for(int i=0;i<n;i++)
		//	cout<<a[i]<<" ";
		//cout<<endl;

		sort(a,a+n);
		for(lli z=0;z<n;z++)
			{
				if(z==n-1)
					break;
		//		cout<<"ai ai+1 "<<a[z]<<a[z+1]<<endl;
				if(a[z]==a[z+1]){
					fnewsingle=1;
					fall=1;
					fnoe=0;
				}
				else if( abs(a[z] - a[z+1])==2 ){
						fnewdouble=1;
				}
				else if(a[z]!=a[z+1]){
					fnoe=1;
					fall=0;
				}
		}
		
		if(fall==1 && fnewdouble==0){
				cout<<"YES";
				return 0;
		}
		if(fnoe==1 && fnewsingle==0 && fnewdouble==0){
			cout<<"NO";
			return 0;
		}
		
		//cout<<"down";
		
		if(fnewsingle==1){
			for(lli aa=0;aa<n;aa++){
				if(aa==n-1 )
					break;
				if(ff==1)
					{
						ff=0;
						continue;
					}
				if(a[aa] == a[aa+1]){
					a[aa]+=1;
					a[aa+1]+=1;
					ff=1;
				}
			}
		}
		else if(fnewdouble==1 && fnewsingle==0){
			for(lli zz=0;zz<n;zz++){
				if(zz==n-1)
					break;
				if( ( a[zz]-a[zz+1] ) ==2)
					a[zz+1]+=2;
				else if( ( a[zz+1]- a[zz] ) == 2)
					a[zz]+=2;
			}
		}
			
		//cout<<" after Elements"<<endl;
		//for(int i=0;i<n;i++)
		//	cout<<a[i]<<" ";
		//cout<<endl;
		//i+=1;
	}
}
