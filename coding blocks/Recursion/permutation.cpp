#include<iostream>
#define fast ios_base::sync_with_stdio(false);cin.tie(0);
using namespace std;
typedef long long ll;

void permutatons(char *inp, int i, int j){
    cout<<"in permutation "<<inp<<"\n";
    if(inp[i]='\0'){
        cout<<inp<<", ";
        return;
    }
    for(int j = 0; j<3;j++){
        swap(inp[i],inp[j]);
        permutatons(inp,i+1,j);
        swap(inp[i],inp[j]);
    }
}

int main(){
    int n;
    cin>>n;
    char inp[n];
    cin>>inp;
    permutatons(inp,0,0);

}