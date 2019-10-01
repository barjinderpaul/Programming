/*    //every number occurring twice except one, find that number;
    //Xor of all numbers; every number occurring twice will cancel each other out

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int x = a[0];
    for(int i=1;i<n;i++)
        x^=a[i];
    cout<<x;
}
*/

/*    //check if num is even or odd
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n&1)
        cout<<"Odd";
    else
        cout<<"Even";
}
*/

/*    //Min bits needed to change a to b

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int NewNum = a^b;
    cout<<__builtin_popcount(NewNum);
}

*/

 /*  //Count Set bits;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<__builtin_popcount(n)<<"\n";
    //Another method;
    int c=0;
    int newn = n;
    while(n){
        if(n&1)
            c++;
        n>>=1;
    }
    cout<<c<<"\n";

    //Or O(No. of setbits)
    c=0;
    while(newn){
        c++;
        newn = newn&(newn-1);
    }
    cout<<c;
}

*/


/*    //Count Unset bits;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
}
*/

    //Get ith Bit;
#include<bits/stdc++.h>
using namespace std;
int getIthBit(int n, int i){
    return (n&(1<<i))!=0?1:0;
}
int main(){
    int i,n;
    cin>>n>>i;
    cout<<getIthBit(n,i);

}

