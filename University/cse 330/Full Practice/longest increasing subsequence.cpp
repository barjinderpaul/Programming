#include<bits/stdc++.h>
using namespace std;

int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n],dp[n];
    // cin>>a[0];
    for(int i=0;i<n;i++){
        cin>>a[i];
        dp[i]=1;
    }
    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(a[i]>a[j]&&dp[i]<dp[j]+1)dp[i]=dp[j]+1;
        }
    }
    int ans=*max_element(dp,dp+n);
    cout<<ans<<endl;
    }
	//code
	return 0;
}
