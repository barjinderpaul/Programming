
#include<bits/stdc++.h>
using namespace std;
typedef long long int  lli;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	lli currArea=-1,maxArea=-1;
	lli n;
	cin>>n; 
	lli a[n+1];
	a[n+1] = 0;
	for(lli i=0;i<n;i++)
		cin>>a[i];
	cout<<" hh";
	stack<lli>s;
	for(lli i=0;i<=n;i++){
		cout<<"in for";
		if(s.empty()){
			s.push(i);
		}
		else if(a[i] == s.top())
			continue;
		else if(a[i]>a[s.top()])
			s.push(i);
		else if(a[i]<a[s.top()]){
			int temp = s.top();
			s.pop();
			if(s.empty()){
				currArea = a[temp]*i;
				if(currArea>maxArea)
					maxArea = currArea;
			}else{
				currArea = a[temp]*(i-s.top()-1);
				if(currArea>maxArea)
					maxArea = currArea;
			}
		}
	}
	if(!s.empty()){
		int i=n;
		while(s.top()!=0){
			int temp = s.top();
			s.pop();
			if(s.empty()){
				currArea = a[temp]*i;
				if(currArea>maxArea)
					maxArea = currArea;
			}else{
				currArea = a[temp]*(i-s.top()-1);
				if(currArea>maxArea)
					maxArea = currArea;
			}
		}
	}
	cout<<maxArea;
}
/*
#include <bits/stdc++.h>
using namespace std;
typedef long long lli;
#define pb push_back
vector < lli > maxUP;
vector < int > s;

lli area(vector<lli> &maxUP)
{
    s.clear();
    maxUP.push_back(0);
    lli returnValue = 0;
    int i = 0;
    while(i < maxUP.size()){
        if(s.empty() || maxUP[i] > maxUP[s.back()]){
            s.push_back(i);
            i++;
        }
        else{
            int t = s.back();
            s.pop_back();

            returnValue = max(returnValue, maxUP[t] * (s.empty() ? i : i - s.back() - 1));
        }
    }
    return returnValue;
}
int main(void)
{
    int i,j,k,bas=0;
	lli value;
    int n;
    cin>>n;
	maxUP.assign(n, 0);
    for(lli i=0;i<n;i++)
    	{
    		cin>>value;
    		maxUP.push_back(value);
    	}
    	cout<<area(maxUP);
    return 0;
    
}	
*/
