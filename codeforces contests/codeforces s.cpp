#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
using namespace std;
int main(){
	fast;
	int64_t l1,r1,l2,r2;
	cin>>l1>>r1>>l2>>r2;
	if(l2!=r1)
		cout<<l2<<" "<<r1<<endl;
	else
		cout<<l1<<" "<<r2<<endl;
}
