#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL)
typedef long long int lli;
using namespace std;
bool cmp( pair<pair<pair<int,int>,int>,pair<pair<int,int>,pair<int,int>>>&a,pair<pair<pair<int,int>,int>,pair<pair<int,int>,pair<int,int>>>&b ){
    return a.first.first.first>b.first.first.first;
}
int main(){
    fast;
    int t,n;
    string s;
    cin>>t;
    while(t--){
        cin>>n;
        vector< pair < pair<pair<int,int>,int> , pair<pair<int,int>,pair<int,int>> > >alls;
        /*
        alls.push_back(make_pair(make_pair(5,1),make_pair(make_pair(2,3),make_pair(4,5))));
        auto it = alls.begin();
        cout<<"total , a, e , i , o, u = "<<(it->first).first<<" "<<it->first.second<<" "<<it->second.first.first<<" "<<it->second.first.second<<" "<<it->second.second.first<<" "<<it->second.second.second<<"\n";
        */
        int noOfStrings=n;
        unordered_map<string,int>mp;
        while(n--){
            cin>>s;
            string pushMap="";
            for(int i=0;i<s.length();i++){
                int flag=0;
                for(int j=0;j<pushMap.length();j++){
                    if(s[i]==pushMap[j]){
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                        pushMap+=s[i];
            }
            //cout<<"string = "<<pushMap<<"\n";
            mp[pushMap]++;
        }
            //in mp;
            s="";
            int mpFreq=0;
            for(auto it=mp.begin();it!=mp.end();it++){
                int total=0,a=0,e=0,iv=0,o=0,u=0;
                s=it->first;
                mpFreq=it->second;
                
                for(int i=0;i<s.length();i++){
                    if(a>1 && e>1 && iv>1 && o>1 &&u>1)
                        break;
                    if(s[i]=='a')
                        a++;
                   else if(s[i]=='e')
                        e++;
                   else if(s[i]=='i')
                        iv++;
                   else if(s[i]=='o')
                        o++;
                   else if(s[i]=='u')
                        u++;
            }

                if(a>0)total++;if(e>0)total++;if(iv>0)total++;if(o>0)total++;if(u>0)total++;
                //cout<<"total = "<<total<<" string = "<<s<<"\n";
                alls.push_back(make_pair(make_pair(make_pair(total,mpFreq),a),make_pair(make_pair(e,iv),make_pair(o,u))));
            }
            
        
        sort(alls.begin(),alls.end(),cmp);
        //auto it = alls.begin();
        int fa,fe,fi,fo,fu,sa,se,si,so,su;
        //cout<<"total , a, e , i , o, u = "<<(it->first).first<<" "<<it->first.second<<" "<<it->second.first.first<<" "<<it->second.first.second<<" "<<it->second.second.first<<" "<<it->second.second.second<<"\n";
         //cout<<"map size ,alls size  "<<mp.size()<<" "<<alls.size()<<"\n";
        int finalCount=0;
        int i=1;
        int sizee = alls.size();
        for(auto it = alls.begin();it!=alls.end();it++){
            //cout<<"i = "<<i<<"\n";
            //cout<<"finalCount = "<<finalCount<<"\n";
            //cout<<it->first.first.first<<" prin\n";
            int freq = it->first.first.second;
            if(it->first.first.first==5){
                i++;
                int plus = noOfStrings-1;
                while(freq--){
                    finalCount+=plus;
                    plus--;
                }
                noOfStrings--;
                continue;
            }
            for(auto it2=it+1;it2!=alls.end();it2++){
                int freq2 = it2->first.first.second;
                if(it->first.first.first+it2->first.first.first<5)
                    break;
                fa = it->first.second;sa = it2->first.second;
                if(fa+sa<1)
                    continue;
                fe = it->second.first.first;se=it2->second.first.first;
                if(fe+se<1)
                    continue;
                fi = it->second.first.second; si = it2->second.first.second;
                if(fi+si<1)
                    continue;
                fo = it->second.second.first; so = it2->second.second.first;
                if(fo+so<1)
                    continue;
                fu = it->second.second.second; su = it2->second.second.second;
                if(fu+su<1)
                    continue;
                //cout<<it->first.first.second<<" " <<it2->first.first.second<<"\n";
                finalCount+=(freq*freq2);
            }
            i+=1;
        }
        cout<<finalCount<<"\n";
    }
}
