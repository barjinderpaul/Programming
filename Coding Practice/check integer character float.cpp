// Example program
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    double a[n];
    for(int i=0;i<n;i++){
        cin>>a[i]; 
		 if(!a[i])
        {cout<<"Character"<<endl;
        
            continue;
        }           
         else if(a[i] == floor(a[i])) 
        {
            cout<<"integer"<<endl;
            continue;
            }
         else 
            {
                cout<<"Float/double"<<endl;
                continue;
                }
    

        }

}

