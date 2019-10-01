#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t n;
	int h;
	cin>>n>>h;
	uint64_t wall[n],height[n];
	for(uint64_t i = 0;i<n;i++)
		cin>>wall[i];
	for(uint64_t j=0;j<n;j++)
		cin>>height[j];
	uint64_t sub,maxH=0;
	int maxnh,putHeight=0;
	for(uint64_t k = 0;k<n;k++){
		sub = height[k]/2;
		sub = sub/2;
		maxnh = wall[k] - sub;
		if(maxnh-h<0)
			continue;
		//cout<<" afrer contiinue " << maxnh-h<<endl;
		putHeight = maxnh-h;
		//cout<<"put = "<<putHeight<<endl;
		if(putHeight<maxH)
			continue;
		if(putHeight>maxH)
			maxH=putHeight;
	}	
	cout<<maxH;
}
