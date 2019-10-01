#include<bits/stdc++.h>
using namespace std;

uint64_t returnAns(string s){
	uint64_t c=0;
    char flag;
   	for(uint64_t i=0 ;i<s.length() ;i++){
        if(isupper(s[i])){
            flag=s[i];
            break;
        }
    }
    for(uint64_t i=0 ;i<s.length() ;i++){
        if(s[i]==flag)
            c++;
    }
	return c;
}

uint64_t main()
{
    string s;
    cin>>s;
    cout<<returnAns(s);
	
    return 0;
}
