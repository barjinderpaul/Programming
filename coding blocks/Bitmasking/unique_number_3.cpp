#include<bits/stdc++.h>
using namespace std;

void findUnique(int *a, int n){
	int bitCount[64] = {0};
	for(int i=0;i<n;++i){
        int num = a[i];
        int j=0;
        while(num>0){
            bitCount[j]+=(num&1)
            ++j;    
            num = num>>1;
        }
    }

    int uniqueNumber=0;
    long power = 1;
    for(int i=0;i<64;++i){
        bitCount[i]%=3;
        ans+=(bitCount[i]*power);
        power = power<<1;
    }
    cout<<ans;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	findUnique(a,n);
}