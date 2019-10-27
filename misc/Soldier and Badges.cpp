#include<bits/stdc++.h>
using namespace std;

int checkDuplicate(int n,vector<int> &a, int &count)
{
	int flag=0;
	sort(a.begin(),a.end());
	for(int i=0;i<n;i++){
		for(int j=i+1;j<=n;j++)
			{
				if(a[i]==a[j])
					{
						flag=1;
						a[j]+=1;
						count++;
						continue;
					}
			}
			
	}
	if(flag==0)
		return count;
	else
		return checkDuplicate(n,a,count);
}


int main(){
	int n,count=0,value;
	cin>>n;
	vector<int> a;
	for(int i=0;i<n;i++)
		{
			cin>>value;
			a.push_back(value);
		}
	cout<<checkDuplicate(n,a,count);
}
