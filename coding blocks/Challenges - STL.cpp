/* //String SORT;
#include<bits/stdc++.h>
using namespace std;

bool cmp(string a, string b){
    if(a.length()<b.length()){
        auto res = mismatch(a.begin(),a.end(),b.begin());
        if(res.first==a.end())
            return a<b;
    }
    else if(b.length()<a.length()){
        auto res = mismatch(b.begin(),b.end(),a.begin());
        if(res.first==b.end())
            return b<a;
    }
    return a<b;
}

int main(){
    int n;
    cin>>n;
    string s;
    vector<string>v;
    for(int i=0;i<n;i++){
        cin>>s;
        v.push_back(s);
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<n;i++){
        cout<<v[i]<<"\n";
    }
}
*/

/*    //Median of two sorted arrays;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int val,n;
    vector<int>v1,v2,v3;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>val,v1.push_back(val);
    for(int i=0;i<n;i++)
        cin>>val,v2.push_back(val);

    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),back_inserter(v3));
    //for(int x:v3){
    //    cout<<x<<" ";
    //}
    int x = v3.size()/2;
    cout<<v3[x-1];
}

*/

/*    //Hostel Visit

#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define pi pair<lli,lli>
int main(){
    lli q,k,type,x,y;
    priority_queue<lli>maxHeap;
    cin>>q>>k;
    for(int i=0;i<q;i++){
        cin>>type;
        if(type==1){
            cin>>x>>y;
            lli dist = (x*x) + (y*y);
            if(maxHeap.size()<k){
                maxHeap.push(dist);
            }
            else{
                lli t = maxHeap.top();
                if(dist<t){
                    maxHeap.pop();
                    maxHeap.push(dist);
                }
            }

        }
        else{
            cout<<maxHeap.top()<<"\n";
        }
    }
}

*/

/*    //String window
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long int lli;

string minSubstring(string s1, string s2){
    //cout<<"in func\n";
    int l1 = s1.length();
    int l2 = s2.length();
    if(l1<l2){
        return "No string";
    }
    int f_pat[256]={0},f_text[256]={0};
    for(int i=0;i<l2;i++)
        f_pat[(int)s2[i]]++;
    int final_start_index = -1, min_lenggth = INT_MAX;
    int j=0,count=0;

    for(int i=0;i<l1;i++){
        f_text[s1[i]]++;
        if(f_pat[s1[i]]!=0 && f_text[s1[i]]<= f_pat[s1[i]])
            count++;

        if(count==l2){

            //removing chars;
            while(f_text[s1[j]] > f_pat[s1[j]] || f_pat[s1[j]]==0 ){
                if( f_text[s1[j]] > f_pat[s1[j]] )
                    f_text[s1[j]]--;
                j++;
            }

            int window_length = i-j+1;
            if(min_lenggth > window_length){
                min_lenggth = window_length;
                final_start_index = j;
            }
        }
    }

    if(final_start_index==-1){
        return "No string";
    }
    return s1.substr(final_start_index,min_lenggth);
}

int main(){
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    cout<<minSubstring(s1,s2);
}
*/

