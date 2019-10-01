#include <bits/stdc++.h>



using namespace std;
 

#define ll long long 
#define eps 1e-10
#define inf 1e6
#define fi first
#define se second
#define MOD1 1000000007LL
#define MOD2 1000000009LL
#define p1 53
#define se second
#define INF 2000000


int a[200005];

struct Trie{

    Trie* l;
    Trie* r;
    long long int sum;
    Trie():l(NULL), r(NULL), sum(0){}
};

void insert(int num, Trie* root){

    for(int i=20; i>=0; i--){
        //cout << i << endl;
        int bit = num & (1<<i);

        if(bit == 0){
            if(root->l == NULL){
                Trie* node = new Trie();
                root->l = node;
            }
            root = root->l;
        }

        else{
            if(root->r == NULL){
                Trie* node = new Trie();
                root->r = node;
            }
            root = root->r;
        }

        root->sum++;
    }

    return;
}

long long query(int num, Trie* root, int k){

    long long ans = 0;

    for(int i=20; i>=0; i--){
        int bit = num & (1>>i);
        int check = k &(1<<i);

        if(check){
            if(bit){
                if(root->r)
                    ans+=root->r->sum;
                if(root->l)
                    root = root->l;
                else
                    return ans;
            }

            else{
                if(root->l)
                    ans+= root->l->sum;
                if(root->r)
                    root = root->r;
                else
                    return ans;
            }
        }

        else{
            if(bit){
                if(root->r)
                    root = root->r;
                else
                    return ans;
            }
            else{
                if(root->l)
                    root = root->l;
                else
                    return ans;
            }
        }
    }

    return ans;
}

int main(){
    //const rlim_t kStackSize = 16 * 1024 * 1024;   // min stack size = 16 MB
    ios::sync_with_stdio(false);
    cin.tie(0);

    //cout << pow(2,30) << endl;
  


        int n,k;
        cin >> n >> k;
        //int cnt = 1;

        for(int i=1; i<=n; i++){
            cin >> a[i];
            //cnt++;
        }

        int temp = 0;
        long long ans=0;

        Trie* root = new Trie();

        insert(0, root);

        for(int i=1; i<=n; i++){
            temp^= a[i];

            ans+=query(temp, root, k);

            insert(temp, root);
        }

        cout << ans/2 << endl;


    return 0;
}
