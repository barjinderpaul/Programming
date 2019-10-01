	using namespace std;
int main(){
    int n,t;
    cin>>t;
    while(t-->0){
    cin>>n;
    int a[n],sumO=0,sumE=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(i%2!=0)
            sumO+=a[i];
        else
            sumE+=a[i];
    }
    cout<<sumO<<endl<<sumE<<endl;
    }
    
}
