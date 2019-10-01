#include <bits/stdc++.h>
using namespace std;
int main()
{
    int testCases,input,a1[11],b1[11],rem,i;
    cin>>testCases;
    while(testCases!=0)
    {
        testCases-=1;
        cin>>input;
        rem=0;
        for(i=0;i<input;i++)
            cin>>a1[i];
        for(i=0;i<input;i++)
            cin>>b1[i];
        sort(a1,a1+input);
        sort(b1,b1+input);
        for(i=0;i<input;i++)
            if(a1[i]<b1[i])
                rem=1;
        cout<<!rem<<endl;
    }
}

