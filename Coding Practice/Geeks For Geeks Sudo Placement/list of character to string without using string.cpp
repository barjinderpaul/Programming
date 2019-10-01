#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n;
    char c,no='1';
    cin>>t;
    vector<char> charArray;
    while(t-- > 0){
        cin>>n;
        
        for(int i=0;i<n;i++){
            cin>>c;
            charArray.push_back(c);
            charArray.push_back(no);
        }
        for(int i=0;i<charArray.size()-1;i+=2)
            cout<<charArray[i];
        charArray.clear();
        cout<<endl;
        
    }
}
