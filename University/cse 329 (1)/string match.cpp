#include<bits/stdc++.h>
using namespace std;
void search(string  pat, string  txt,int r) 
{ 
int k=0;
    int M = pat.length();
    if(r<M)
        M=r;
    int N = txt.length();
    for (int i = 0; i <= N - M; i++) { 
        int j; 
        for (j = 0; j < M; j++) 
        {
            if (txt[i + j] != pat[j]) 
                break; 
        }
        if (j == M) 
        {
            k++;
            cout<<i<<" ";
        }
    }
    if(k == 0)
    {
        cout<<"-1"<<endl;
    }
} 
int main() 
{ 
    string a,d;
    int n;
    cin>>a;
    cin>>d>>n;
    search(d, a,n); 
    return 0; 
}
