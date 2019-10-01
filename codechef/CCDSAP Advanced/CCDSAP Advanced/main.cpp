#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);
typedef long long int lli;
using namespace std;

void topics(){
    /*
        asymp. notations;
        recurrence relations;
        binary search questions written in copy //where sorted array is not mandatory but it requires some pattern or property finding;

    */
}

void rotatedArray(){
    lli n=5;
    //int arr[n]= {13,22,30,45,1,5,6,11};
    int arr[n] = {1,2,3,4,5};
    int last = arr[4];
    int l=0,h=n-1,mid;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid]>arr[mid-1] && mid+1 <= n && arr[mid]>arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        if(arr[mid]>last){
            l = mid+1;
        }
        else if(arr[mid]<last){
            h = mid-1;
        }
    }
}


void twoFrequency(){
    lli n=12;
    int arr[n] = {1,2,3,4,5,5,6,7,8,9,10,11};
    int l=0,h=n-1,mid;
    while(l<=h){
        mid = (l+h)/2;
        if(arr[mid]==arr[mid-1] || arr[mid]== arr[mid+1]){
            cout<<arr[mid];
            break;
        }
        if(arr[mid]==mid+1){
            l = mid+1;
        }
        else if(arr[mid]!=mid+1){
            h = mid-1;
        }
    }
    return;
}


void oneFrequency(){
        lli n = 1;
        lli arr[1]  = {1};
        int l=0,h=n-1,mid;
        while(l<=h){
            mid = (l+h)/2;
            if(arr[mid]!=arr[mid-1] && arr[mid]!=arr[mid+1]){
                cout<<arr[mid];
                break;
            }
            if(arr[mid]==arr[mid-1]){
                if(mid%2!=0 && (mid-1)%2==0 ){
                    l = mid+1;
                }
            }
            else if(arr[mid]==arr[mid+1]){
                if(mid%2!=0 && (mid+1)%2==0 ){
                    h = mid-1;
                }
            }
        }
}
int main(){
    fast;
    /*
    vector<lli>v;
    lli n,val;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    lli key;
    cin>>key;
    lli index = upper_bound(v.begin(),v.end(),key)-v.begin();
    cout<<"upper bound = "<<v[index];

    lli mid,l=0,flag=0,h=v.size()-1;
    while(l<=h){
        mid = (l+h)/2;
        if(v[mid]<key)
            h = mid-1;
        else if(v[mid]>key)
            l = mid+1;
        else if(v[mid]==key){
            if(mid==v.size()-1){
                cout<<-1;
                break;
            }
            else{
                cout<<mid;
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<l<<"\n";
    }
    */
    //twoFrequency();
    oneFrequency();
}
