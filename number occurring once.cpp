#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,value;
	cin>>n;
	vector<int> A;
	for(int i=0;i<n;i++)
		{
		cin>>value;
		A.push_back(value);
		}


    for(int i=0;i<A.size();i++){
        if(count(A.begin(),A.end(),A[i]) == 1)
            cout<<A[i];
    }


}
