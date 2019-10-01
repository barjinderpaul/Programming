#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
        int i=1;
        int levels=0;
        while(1){
        	cout<<"i = "<<i<<endl;
            if(i>=n){
                break;
            }
            if(2*i<=n){
                levels++;
                
            }
            i=i*2;
        }
        cout<<levels<<"\n";
    }
}
