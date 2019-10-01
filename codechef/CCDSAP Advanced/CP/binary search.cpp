#include<bits/stdc++.h>
using namespace std;

void bs(int a[],int n,int key){
    int l=0,h=n-1,mid;
    while(l<=h){
        mid = (l+h)/2;
        if(a[mid]==key){
            cout<<a[mid]<<" index = "<<mid<<"\n";
            break;
        }
        if(a[mid]<key)
            l = mid+1;
        else if(a[mid]>key)
            h = mid-1;
    }
    if(l>h)
        cout<<-1;
    return;
}

void firstOccurrence(int a[],int n,int key){
    int l=0,h=n-1,m;
    while(l<=h){
        m = (l+h)/2;
        if(a[m]==key){
            break;
        }
        if(a[m]>key)
            h = m-1;
        else if(a[m]<key)
            l = m+1;
    }
    if(l>h)
        cout<<"not found\n";
    //cout<<"mid - "<<m<<"\n";
    while(a[m]==a[m-1] && m!=0){
        m--;
    }
    cout<<"first occurrence at index = "<<m<<"\n";
    return;
}


void lastOccurrence(int a[],int n,int key){
    int l=0,h=n-1,m;
    while(l<=h){
        m = (l+h)/2;
        if(a[m]==key)
            break;
        if(a[m]>key)
            h = m-1;
        else if(a[m]<key)
            l = m+1;
    }
    if(l>h)
        cout<<"not found\n";
    while(a[m]==a[m+1] && m!=n){
        m++;
    }
    cout<<"last occurrence at index  = "<<m<<"\n";
}

void totalOccurrences(int a[],int n,int k){
    int l=0,h=n-1,m;
    while(l<=h){
        m = (l+h)/2;
        if(a[m]==k)
            break;
        if(a[m]>k)
            h=m-1;
        else if(a[m]<k)
            l=h+1;
    }
    int mid = m;
    while(a[mid]==a[mid-1] && mid!=0)
        mid--;
    while(a[m]==a[m+1] && m!=n)
        m++;
    cout<<"total occurrences = "<<m-mid+1<<"\n";
    return;
}

void upperBound(int a[],int n,int k){
    int l=0,h=n-1,m,ans;
    while(l<=h){
        m = (l+h)/2;
        if(a[m]==k){
            //ans=m;
            break;
        }
        else if(a[m]>k)
            h=m-1;
        else if(a[m]<k)
            l=m+1;
        }

    if(m+1>=n){
        cout<<-1<<"\n";
        return;
    }
    else{
        if(l>h)
            cout<<a[m]<<"\n";
        else
            while(a[m]==a[m+1])
                m++;
    }
    if(m+1>=n)
        cout<<a[m]<<"\n";
    else
        cout<<a[++m]<<"\n";

}

void lowerBound(int a[],int n,int k){
    int l=0,h=n-1,m,ans;
    while(l<=h){
        m = (l+h)/2;
        if(a[m]==k){
            break;
        }
       else if(a[m]>k)
            h=m-1;
        else if(a[m]<k)
            l=m+1;
    }
    if(m-1<0){
        cout<<-1<<"\n";
        return;
    }
    else{
        while(a[m]==a[m-1])
            m--;
    }
    if(m-1<0)
        cout<<a[m]<<"\n";
    else
        cout<<a[--m]<<"\n";
}

void addNewKey(int a[],int n,int k){
    int l=0,h=n-1,m;
    while(l<=h){
        m=(l+h)/2;
        if(a[m]==k)
            break;
        if(a[m]<k)
            l = m+1;
        else if(a[m]>k)
            h = m-1;
    }

    if(m-1<0){
        cout<<0<<"\n";
        return;
    }
    else{
        while(a[m]==a[m+1])
            m++;
    }
    if(m-1<0)
        cout<<m<<"\n";
    else
        cout<<++m<<"\n";
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int key;
    cin>>key;
    //bs(a,n,key);              //binary search on the array;
    //firstOccurrence(a,n,key);
    //lastOccurrence(a,n,key);
    //totalOccurrences(a,n,key);

    //upperBound(a,n,key);
    //lowerBound(a,n,key);

    int k;
    cout<<"enter new key to be inserted\n";
    cin>>k;
    addNewKey(a,n,k);
}
