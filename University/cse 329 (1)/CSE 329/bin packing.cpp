#include<bits/stdc++.h>
using namespace std;

int firstFit(int weight[], int n, int c) 
{ 
    int res = 0; 
   int bin_rem[n]; 
    for (int i=0; i<n; i++) 
    { 
        int j; 
        for (j=0; j<res; j++) 
        { 
            if (bin_rem[j] >= weight[i]) 
            { 
                bin_rem[j] = bin_rem[j] - weight[i]; 
                break; 
            } 
        } 
        if (j==res) 
        { 
            bin_rem[res] = c - weight[i]; 
            res++; 
        } 
    } 
    return res; 
} 

int main(){
	int n,capacity;
	cin>>n>>capacity;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,greater<int>());
	cout<<firstFit(a,n,capacity);
}
