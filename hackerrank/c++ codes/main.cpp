    #include<bits/stdc++.h>
    using namespace std;
    void display(vector<int>&v){
        for(auto x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    int main(){
        int n,val;
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cin>>n;
        vector<int> v;
        int visited[100001]={0};
        vector<int> mins;
        for(int i=0;i<n;i++){
            cin>>val;
            v.push_back(val);
        }
        for(int i=0;i<n;i++){
            int minn=INT_MAX,minval;
            //cout<<"at i = "<<i<<" v[i] = "<<v[i]<<endl;
            if(visited[v[i]]==0){
                //cout<<"in if"<<endl;
                for(int j=i+1;j<n;j++){
              //      cout<<"at j = "<<j<<" v[j] = "<<v[j]<<endl;
                    if(v[i]==v[j]){
            //            cout<<" in if at j = "<<j<<" v[j] = "<<v[j]<<endl;

                        minval = abs(i-j);
          //              cout<<"minn  , minval = "<<minn<<minval<<endl;
                        minn = min(minn,minval);
                        mins.push_back(minn);


                        }
                }

            }

            visited[v[i]] = 1;
        }
        //display(mins);
        //cout<<"size = "<<mins.size()<<endl;
        if(!mins.empty())
            cout<<*min_element(mins.begin(),mins.end());
        else
            cout<<-1<<endl;
        return 0;
    }
