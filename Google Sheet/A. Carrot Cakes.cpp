#include<iostream>
#include<cmath>
using namespace std;
int main(){
	int n,t,k,d,flag=0;
	cin>>n>>t>>k>>d;
	int g = (n+k-1)/k;
	int o1 = 0, o2 = d;
        for(int i=0; i<g; i++) {
            if(o1 <= o2) o1 += t;
            else o2 += t;
        }
        
        if(max(o1,o2) < g*t)
        	cout<<"YES";
        else
        	cout<<"NO";
    }

