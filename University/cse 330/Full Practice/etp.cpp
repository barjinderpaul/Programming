#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc--){
    	int input,k;
        cin>>input>>k;
        int indicator=0;
        int array[input];
        for(int a=0;a<input;a++){
            cin>>array[a];
        }
        for(int a=1;a<=input;a++){
            for(int b=1;b<=k;b++){
                int product = array[a]*b;
                  if(product==k)
                  {
                      indicator=1;
                      break;
                  }
            }
        }
        if(indicator==1){
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
    	}
    }
}
