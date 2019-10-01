#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;

int findSum(int *a, int num, int k){
    int i=0;
    long sum=0;
    while(num){
        if(num&1){
            sum+=a[i];
        }
        ++i;
        num = num>>1;
    }
    return sum==k;
}

void findAndMatchSum(int *a, int n, int k){
    int range = (1<<n)-1;
    for(int i=0;i<=range;i++){
        int found = findSum(a,i,k);
        if(found){
            cout<<"Yes\n";
            return;
        }
    }
    cout<<"No\n";
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        findAndMatchSum(a,n,k);


    }
}
