
    //Matrix Queries-1
#include<bits/stdc++.h>
#define N 2
using namespace std;

struct array2d{
    int a[2][2];
};

void multiply(int mat1[][N],int mat2[][N], int st[][N]){
    int i, j, k;
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            st[i][j] = 0;
            for (k = 0; k < N; k++)
                st[i][j] += mat1[i][k] *  mat2[k][j];
        }
    }

}

void displayVectorElements(int arr[][N]){
    cout<<"Displaying elements = \n";
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++)
            cout<<arr[i][j]<<" ";
        cout<<"\n";
    }
    cout<<"\n";
}
void displayVector(vector<array2d>v){
    for(int i=0;i<v.size();i++){
        array2d arr = v[i];
        displayVectorElements(arr.a);
    }
}

void build_tree(vector<array2d>v,array2d st[], int low, int high, int pos){
    if(low==high){
        st[pos] = v[low];
    }
    else{
        int mid = (low+high)/2;
        build_tree(v,st,low,mid,2*pos);
        build_tree(v,st,mid+1,high,2*pos+1);
        multiply(st[2*pos].a,st[2*pos+1].a,st[pos].a);
    }
}

void displaySegmentTree(array2d st[], int n){
    cout<<"Displaying segment tree\n";
    for(int i=1;i<=4*n;i++){
        array2d x = st[i];
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++)
                cout<<x.a[i][j]<<" ";
        cout<<"\n";
        }
        cout<<"\n";
    }
    cout<<"\n";
}

int main(){
    int r,n,q;
    string s;
    cin>>r>>n>>q;
//    array2d arr[n+1];
    vector<array2d>v;
    for(int z=1;z<=n;z++){
        array2d b;
        for(int i=0;i<2;i++){
            for(int j=0;j<2;j++){
                cin>>b.a[i][j];
            }
        }
        //arr[z].a = b;
        v.push_back(b);
        getline(cin,s);
    }
    //displayVector(v);
    int left,right;
    array2d st[4*n+1];
    build_tree(v,st,1,n,1);
    displaySegmentTree(st,n);
    while(q--){
        cin>>left>>right;
        //cout<<RMQ()
    }

}
