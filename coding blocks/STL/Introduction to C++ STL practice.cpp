/*    //Sorting
#include<bits/stdc++.h>
using namespace std;

bool cmp(int a, int b){
    return a>b;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sort(arr,arr+n); //ascending
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<"\n";
    sort(arr,arr+n,cmp); //descending
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";

}

*/

/*    //Binary Search;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,val;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>val;
        v.push_back(val);
    }

    int key;
    cin>>key;

    //Checking if key is present or not;
    if(binary_search(v.begin(),v.end(),key))
        cout<<"Key present\n";
    else
        cout<<"Key not present\n";

    //First Occurrence of a number at index = ;
    int index = lower_bound(v.begin(),v.end(),key)-v.begin();
    if(index>=n || v[index]!=key)
        cout<<"Key not found at any index\n";
    else
        cout<<"First Index at where key is present is = "<<index<<"\n";

    //Last occurrence of a number at index = ;
    index = upper_bound(v.begin(),v.end(),key) - v.begin();
    //cout<<"index = "<<index<<"\n";
    if(v[index-1]!=key )
        cout<<"Key not found at any index\n";
    else{
        cout<<"Last occurrence present at = "<<index-1<<"\n";
    }

}

*/

/*    //Strings
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1("Hello world");
    cout<<"s1 = "<<s1<<"\n";
    string s2 = "Hello 2 world";
    cout<<"s2 = "<<s2<<"\n";

    string s3;
    getline(cin,s3);
    cout<<"s3 = "<<s3<<"\n";

    //STOI functions; (C++ 11) g++ >= 4.6.x
    string n1 = "123";
    int n11 = stoi(n1);
    cout<<"num1 = "<<n11+1<<"\n";

    string n2 = "12345678";
    long int n22 = stol(n2);
    cout<<"num2 long  = "<<n22+1<<"\n";

    //stoll() : long long;

    string n3 = "1.1000";
    float n33 = stof(n3);
    cout<<"num3 float = "<<n33<<"\n";

    //stod() : double
    //stold() : long double;

    //to_string();
    int s11 = 12345;
    string s111 = to_string(s11);
    cout<<"s111 = "<<s111<<"\n";

}

*/

/*   //stack, queue, priority queue, priority_queue with custom comparator(Functor);
    //Functors are functions behaving as objects;

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {1,2,4,3,5};
    stack<int>st;
    for(int i=0;i<5;i++)
        st.push(arr[i]);
    cout<<"Displaying stack\n";
    while(!st.empty()){
        int t = st.top();
        st.pop();
        cout<<t<<" ";
    }
    cout<<"\n";

    queue<int>q;
    for(int i=0;i<5;i++)
        q.push(arr[i]);
    cout<<"Displaying Queue\n";
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout<<f<<" ";
    }
    cout<<"\n";

    priority_queue<int>maxHeap;
    for(int i=0;i<5;i++)
        maxHeap.push(arr[i]);

    cout<<"Displaying MaxHeap\n";
    while(!maxHeap.empty()){
        int t = maxHeap.top();
        maxHeap.pop();
        cout<<t<<" ";
    }
    cout<<"\n";

    priority_queue<int,vector<int>,greater<int> > minHeap;
    for(int i=0;i<5;i++)
        minHeap.push(arr[i]);
    cout<<"Displaying minHeap\n";
    while(!minHeap.empty()){
        int t = minHeap.top();
        minHeap.pop();
        cout<<t<<" ";
    }
    cout<<"\n";

    //priority_queue with custom comparator;


}
*/

/*    //Hashmaps;
    //Map is sorted, implementation of Balanced BST / Red-Black Tree having a factor of O(logn)

#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<string,int>fruits;
    fruits["Apple"] = 100;
    fruits.insert({"Mango",120});

    cout<<"prince of apple = "<<fruits["Apple"]<<"\n";

    if(fruits.count("guava")==0) //returns 0 or 1
        cout<<"Guava does not exist\n";
    else
        cout<<"Price of Guava = "<<fruits["guava"]<<"\n";

    auto f = fruits.find("Mango");
    cout<<"Price of Mango = "<<(f->second)<<"\n";

    fruits["guava"] = 40;
    if(fruits.count("guava")==0) //returns 0 or 1
        cout<<"Guava does not exist\n";
    else
        cout<<"Price of Guava = "<<fruits["guava"]<<"\n";

    fruits.erase("guava");
    if(fruits.count("guava")==0) //returns 0 or 1
        cout<<"Guava does not exist\n";
    else
        cout<<"Price of Guava = "<<fruits["guava"]<<"\n";

}

*/

