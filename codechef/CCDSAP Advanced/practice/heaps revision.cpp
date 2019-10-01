 /*   //Heaps Codechef KSUBSU Kth max contiguous sum
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    int t;
    cin>>t;
    while(t--){
        int n,k1,k2,k3;
        cin>>n>>k1>>k2>>k3;
        int arr[n+1];
        for(int i=1;i<=n;i++)
            cin>>arr[i],arr[i]+=arr[i-1];

        priority_queue<int,vector<int>,greater<int>>pq;

        //making contiguous sum;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j++){
                int currSum = arr[j] - arr[i-1];
                if(pq.size()<k3){
                    pq.push(currSum);
                }
                else{
                    if(currSum>pq.top()){
                        pq.pop();
                        pq.push(currSum);
                    }
                }
            }
        }

        int ans[2013];
        int currK = k3;
        while(!pq.empty()){
            ans[currK--] = pq.top();
            pq.pop();
        }
        cout<<ans[k1]<<" "<<ans[k2]<<" "<<ans[k3]<<"\n";

    }
}
*/

/*    //Heaps weirdfn spoj;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

const int mod  = 1000000007;

int main(){
    fast;
    int t,a,b,c,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>c>>n;
        priority_queue<int> bottomHalf;
        priority_queue<int,vector<int>,greater<int>> topHalf;
        bottomHalf.push(1); //f[1]
        int bSize=1,tSize=0;
        long long result=1;
        for(int i=2;i<=n;i++){
            int median = bottomHalf.top();
            int curr = (1LL*a*median + 1LL*b*i + c)%mod;
            bottomHalf.push(curr);
            bSize++;
            while(bSize > tSize){
                int val = bottomHalf.top();
                bottomHalf.pop();
                topHalf.push(val);
                bSize--;tSize++;
            }
            while(bSize < tSize){
                int val = topHalf.top();
                topHalf.pop();
                bottomHalf.push(val);
                tSize--;
                bSize++;
            }
            while(!bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top())){
                int val = bottomHalf.top();bottomHalf.pop();
                int val2 = topHalf.top();topHalf.pop();
                bottomHalf.push(val2);
                topHalf.push(val);
            }
            result+=curr;
        }
        cout<<result<<"\n";
    }

}

*/

/*    //heaps SPOJ running median again;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);

using namespace std;

const int mod  = 1000000007;
typedef long long lli;
int main(){
    fast;
    lli t,n,val;
    cin>>t;
    while(t--){
        priority_queue<lli> bottomHalf;
        priority_queue<lli,vector<lli>,greater<lli>> topHalf;
        int bSize=0,tSize=0;
        while(1){
            cin>>val;
            if(val==0)
                break;
            if(val==-1){
                cout<<bottomHalf.top()<<"\n";
                bottomHalf.pop();
                //bottomHalf.push(val);
                bSize--;
                while(bSize > tSize){
                    lli val = bottomHalf.top();
                    bottomHalf.pop();
                    topHalf.push(val);
                    bSize--;tSize++;
                }
                while(bSize < tSize){
                    lli val = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(val);
                    tSize--;
                    bSize++;
                }
                while(!bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top())){
                    lli val = bottomHalf.top();bottomHalf.pop();
                    lli val2 = topHalf.top();topHalf.pop();
                    bottomHalf.push(val2);
                    topHalf.push(val);
                }
            }
            else{
                bottomHalf.push(val);
                bSize++;
                while(bSize > tSize){
                    lli val = bottomHalf.top();
                    bottomHalf.pop();
                    topHalf.push(val);
                    bSize--;tSize++;
                }
                while(bSize < tSize){
                    lli val = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(val);
                    tSize--;
                    bSize++;
                }
                while(!bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top())){
                    lli val = bottomHalf.top();bottomHalf.pop();
                    lli val2 = topHalf.top();topHalf.pop();
                    bottomHalf.push(val2);
                    topHalf.push(val);
                }
            }
        }
    }

}
*/

/*    //Spoj Minstock;

#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;
int main(){
    fast;
    lli t;
    cin>>t;
    lli type,cost;
    string name;
    int i=1;
    unordered_map<lli,string>m1;
    unordered_map<string,lli>m2;
    set<lli>costs;
    while(t--){
        cin>>type;
        if(type==1){
            cin>>name>>cost;
            costs.insert(cost);
            m1[cost] = name;
            m2[name] = cost;
        }
        else if(type==2){
            //change cost
            cin>>name>>cost;
            costs.erase(m2[name]);  //remove cost for this name;
            costs.insert(cost);
            m1[cost] = name;
            m2[name] = cost;
        }
        else{
            cin>>name;
            lli minCost = *(costs.begin());
            costs.erase(minCost);
            cout<<m1[minCost]<<" "<<i<<"\n";
        }
        i++;
//cout<<"\n";
    }

}

*/

