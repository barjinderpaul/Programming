
#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;
map<string,long long> mp;
map<string,long long> ::iterator it;
long long a[MAXN];
int main()
{
	long long k,q;
	string s;
	scanf("%lld%lld",&q,&k);
	for(long long i=0;i<q;i++)
	{
		long long tmp;
		cin>>s;
		scanf("%lld",&tmp);
		it=mp.find(s);
		if(it==mp.end())
			mp[s]=tmp;
		else
			mp[s]+=tmp;
	}
	long long cnt=0;
	for(it=mp.begin();it!=mp.end();it++)
		a[cnt++]=(*it).second;
	sort(a,a+cnt);
	long long sum=0;
	for(long long i=cnt-1,j=0;j<k&&i>=0;i--,j++)
		sum+=a[i];
	printf("%lld\n",sum);
	return 0;
}
