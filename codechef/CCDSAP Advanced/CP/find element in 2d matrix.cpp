#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4][4] = { {1,2,3,4},
                    {5,6,7,8},
                    {9,10,11,12},
                    {13,14,15,16}
                    };
    //binary search in first column and finding just greater element;
    for(int i=0;i<4;i++)
        for(int j=0;j<4;j++)
            cout<<a[i][j]<<" ";

    //applying binary search in the first column to get just shorter element;
    int k;
    cin>>k;
    int i=0;
    int l=0,h=3,m;
    while(l<=h){
        m = (l+h)/2;
        //cout<<"l , h , m = "<<l<<" " <<h<<" "<<m<<"\n";
        //cout<<"element = "<<a[m][i]<<"\n";
        if(a[m][i]<k)
            l=m+1;
        else
            h=m-1;
    }
    //cout<<"l , h , m = "<<l<<" " <<h<<" "<<m<<"\n";
    int row = h;
    cout<<"row = "<<row;

    //applying binary search in that row;
    l=0,h=3;
    while(l<=h){
        m=(l+h)/2;
        if(a[row][m]==k)
            break;
        if(a[row][m]<k)
            l=m+1;
        else if(a[row][m]>k)
            h=m-1;
    }
    cout<<"index of element = "<<row<<","<<m;
}
