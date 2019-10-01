/*    //Very basics;
#include<bits/stdc++.h>
using namespace std;
int main(){
    //min heap;
    priority_queue<int,vector<int>,greater<int>>minHeap;
    priority_queue<int>maxHeap;

    for(int i=0;i<5;i++){
        minHeap.push(i);
        maxHeap.push(i);
    }

    cout<<"Contents of minHeap : ";
    while(!minHeap.empty()){
        int t = minHeap.top();
        minHeap.pop();
        cout<<t<<" ";
    }
    cout<<"\n";
    cout<<"Contents of maxHeap : ";
    while(!maxHeap.empty()){
        int t = maxHeap.top();
        maxHeap.pop();
        cout<<t<<" ";
    }
}
*/

    //Running Mediam SPOJ - RMID2;
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long ll;

int main(){
    fast;
    ll val,t;
    cin>>t;
    while(t--){
        priority_queue<ll> bottomHalf;
        priority_queue<ll,vector<ll>,greater<ll> >topHalf;
        int bsize=0,tsize=0;
        while(1){
            cin>>val;
            if(val==0)
                break;
            else if(val==-1){
                cout<<bottomHalf.top()<<"\n";
                bottomHalf.pop();
                bsize--;
                while(bsize>tsize){
                    ll t = bottomHalf.top();
                    bottomHalf.pop();
                    topHalf.push(t);
                    bsize--;
                    tsize++;
                }

                while(tsize > bsize){
                    ll t = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(t);
                    tsize--;
                    bsize++;
                }

                while( !bottomHalf.empty() && (!topHalf.empty() && bottomHalf.top() > topHalf.top() )){
                    ll t = bottomHalf.top();
                    bottomHalf.pop();
                    ll t2 = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(t2);
                    topHalf.push(t);
                }
            }
            else{
                bottomHalf.push(val);
                bsize++;
                while(bsize>tsize){
                    ll t = bottomHalf.top();
                    bottomHalf.pop();
                    topHalf.push(t);
                    bsize--;
                    tsize++;
                }
                while(tsize>bsize){
                    ll t = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(t);
                    tsize--;
                    bsize++;
                }
                while(!bottomHalf.empty() &&( !topHalf.empty() && bottomHalf.top() > topHalf.top())  ){
                    ll t = bottomHalf.top();
                    bottomHalf.pop();
                    ll t2 = topHalf.top();
                    topHalf.pop();
                    bottomHalf.push(t2);
                    topHalf.push(t);
                }
            }
        }
    }

}
