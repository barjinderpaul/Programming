#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;
   	cin>>n;
	int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
	cin>>q;
    while(q--)
    {
        int ch,x;
		cin>>ch>>x;
        if(ch==0)
        {
            int lb=lower_bound(a,a+n,x)-a;
            cout<<n-lb<<endl;     
        }
        else
        {
            int ub=upper_bound(a,a+n,x)-a;
			cout<<n-ub<<endl;
        }
    }
    return 0;
}
