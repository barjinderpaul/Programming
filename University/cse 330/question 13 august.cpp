#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
int main(){
	vector<int> elements;
	int k,m,mid=0,count=0;
	cout<<"enter value of k and m";
	cin>>k>>m;
		for(int i=0;i<sqrt(m);i++){
			if(k==m || k>m){
			break;
		}
		for(int i=2;i<k;i++){
		if(k%i==0){
			elements.push_back(i);			
		}
	}
	
	if(k+elements[elements.size()-1] <= m){
			mid = k+elements[elements.size()-1];			
	}
	else{int i=3;
		mid=k+elements[elements.size()-2];
		while(mid>m){
			mid=k+elements[elements.size()-i];
			i++;
		}
		}
	elements.clear();	
	k=mid;
	count++;
}
cout<<"Minimum Steps : "<<count;

	
}
