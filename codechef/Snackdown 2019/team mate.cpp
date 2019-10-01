#include<iostream>
#include<algorithm>
using namespace std;
#define p 1000000007;
/*long long pairr(long long n)
{
	if(n==1 || n==0)
	return 1;
	else
	return (n*(n-1))/2;
}*/
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	long long *a,n,t,*b,j,ans,x;
	cin>>t;
	while(t--)
	{
		j=0,ans=1;
		cin>>n;
		a=new long long[n];
		b=new long long[n];
		b[0]=1;
		for(long long i=0;i<n;i++)
		cin>>a[i];
		sort(a,a+n,greater<long long>());
		for(long long i=1;i<n;i++)
	    {
	    	if(a[i]==a[i-1])
	    	b[j]=b[j]+1;
	    	else
    		b[++j]=1;
	    }
	    //cout<<b[0]<<"   ";
	    //for(int i=0;i<=j;i++)
	    //cout<<b[i];
	    for(long long i=1;i<=j;i++)
	    b[i]=b[i]+b[i-1];
	    if(j==n)
	    cout<<1<<endl;
	    else{
	    if(b[0]>1){
    	ans=((b[0]*(b[0]-1))/2)%p;}
    	else
    	ans=1;
    	//cout<<ans<<endl;
		for(long long i=1;i<=j;i=i++){
		x=b[i]-b[i-1];
		if (((b[i-1]%2)!=0 && x>1)){
		ans=((ans*x*(x-1)*(x-2))/2)%p;}
		else if((b[i-1]%2)==0 && x>1){
		ans=((ans*x*(x-1))/2)%p;}
		else
		ans=ans*1;}
		//cout<<ans<<endl;
		}
		
		cout<<ans<<endl;
        
	}
}

