#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int deno[] = {1,2,5,10,20,50,100,500,1000};
	int sizeDeno = sizeof(deno)/sizeof(deno[0]);
	vector<int>result;
	for(int i = sizeDeno - 1;i>=0;i--){
		while(n>=deno[i]){
			n-=deno[i];
			result.push_back(deno[i]);
		}
	}
	for(int i=0;i<result.size();i++)
		cout<<result[i]<< " ";	
	cout<<"total notes needed = "<<result.size();
}
