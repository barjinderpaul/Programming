/*#include<bits/stdc++.h>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return 0;
    if(n<=3)
        return 1;
    if(n%2==0 || n%3==0)
        return 0;
    for(int i=5;i*i<=n;i+=2){
        if(n%i==0 || n%(i+2)==0)
            return 0;
    }
    return 1;
}

int main(){
    int n;
    cin>>n;
    if(isPrime(n))
        cout<<"yes\n";
    else
        cout<<"no\n";
}
*/
/*
#include<bits/stdc++.h>
using namespace std;

void sieve(int n){
    int prime[n+1];
    for(int i=0;i<=n;i++)
        prime[i]=1;
    prime[0] = prime[1] = false;
    for(int i=2;i*i<=n;++i){
        if(prime[i]){
            for(int j=i*i;j<=n;j+=i)
                prime[j]=false;
        }
    }

    for(int i=2;i<=n;i++){
//        cout<<"val at i = "<<i<<" "<<prime[i]<<"\n";
        if(prime[i])
            cout<<i<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    sieve(n);
}


*/

/*
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int n,m;
int findFirst(int a[],int low, int high){
    int mid;
    while(low<=high){
        mid = (low) + (high-low)/2;
        if(a[mid]==1 && (mid==0 || a[mid-1]==0))
            return mid;
        if(a[mid]==0)
            low = mid+1;
        else
            high = mid-1;
    }
    return -1;
}

int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int a[n][m];
        for(int i=0;i<n;++i)
            for(int j=0;j<m;++j)
                cin>>a[i][j];

        int maxRowIndex = 0 ,maxOne=-1;
        for(int i=0;i<n;i++){
            int ones = findFirst(a[i],0,m-1);
            if(ones!=-1 && m-1-ones>maxOne)
                maxOne = ones,maxRowIndex=i;
        }
        cout<<maxRowIndex<<"\n";
    }
 	return 0;
}
*/

/*
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
int main(){
    //fast;
    int t;
    cin>>t;
    while(t--){
        int r,c;
        cin>>r>>c;
        int a[r][c];
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                cin>>a[i][j];
        int len = r*c;
        int ar[len];
        int k=0;
        for(int i=0;i<r;i++)
            for(int j=0;j<c;j++)
                ar[k]=a[i][j],k++;

        sort(ar,ar+len);
        cout<<ar[(len)/2]<<"\n";
    }
 	return 0;
}
*/

/*
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int freq[26]={0};
        for(int i=0;i<s.length();i++)
            freq[s[i]-'a']++;
        int flag=0;
        for(int i=0;i<26;i++){
            if(flag)
                break;
            for(int j=0;j<26;j++){
                if(freq[i]!=freq[j] || freq[i]==0 || freq[j]==0 ){
                    cout<<"No\n";
                    flag=1;
                    break;
                }
            }
        }
        if(!flag)
            cout<<"Yes\n";

    }
}
*/

