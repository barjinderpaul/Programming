#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
typedef double lli;
using namespace std;
void display(unordered_map<char,pair<int,int>>up){
    for(auto it:up){
        cout<<it.first<<" "<<it.second.first<<" "<<it.second.second<<"\n";
    }
}

lli distanceCalculate(lli x1, lli y1, lli x2, lli y2){
	lli x = x1 - x2;
	lli y = y1 - y2;
	lli dist;
	dist = pow(x, 2) + pow(y, 2);
	dist = sqrt(dist);
	return dist;
}

int main(){
    lli n,m,x,q;
    int64_t c=0;
    char ch;
    string s;
    cin>>n>>m>>x;
    int present[26]={0};
    multimap<char,pair<int,int> >up;
    set<pair<lli,lli>>spaces;
    int firstS=0,secondS=0;
    //firstSpace=. secondSpace=,
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch;
            if(islower(ch)){
                present[ch-'a']++;
                //cout<<"s[i] and present[s[i]-'a'] "<<mat[i][j]<<" "<<present[mat[i][j]-'a']<<"\n";
            }
            if(ch=='S' && firstS==1){
                secondS=1;
                spaces.insert(make_pair(i,j));
            }
            else if(ch=='S' && firstS==0){
                spaces.insert(make_pair(i,j));
                firstS=1;
            }
            else
                up.insert({ch,make_pair(i,j)});
        }
    }
    cin>>q;
    cin>>s;
    //cout<<"x= "<<x<<"\n";
    for(int i=0;i<q;i++){
        if(isupper(s[i]) && !firstS){
            //cout<<"not S and at s[i] = "<<s[i]<<"\n";
            cout<<-1;
            return 0;
        }
        else if(present[tolower(s[i])-'a']==0){
            //cout<<"not found at = "<<s[i]<<"\n";
            cout<<-1;
            return 0;
        }
        else{
            if(isupper(s[i])){
                char currch = tolower(s[i]);
                int flag=0;
                auto itr = up.lower_bound(currch);
                if(itr->first==currch){
                    auto it = spaces.rbegin();
                    pair<lli,lli> p= *it;
                    lli ed = distanceCalculate(p.first,p.second,itr->second.first,itr->second.second);
                    if(ed>x)
                        c+=1;
                }
            }
        }

    }
    cout<<c<<"\n";
    //display(up);
    return 0;
}
