#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a,b,c,d,e,f;
	cin>>a;
	cin>>b>>c>>d>>e>>f;
	char z=a[0];
	char x = a[1];
	int flag=0;
	for(int i=0;i<2;i++){
		if(z==b[i]||z==c[i]||z==d[i]||z==e[i]||z==f[i]){
			cout<<"YES";
			flag=1;
			break;
		}
		
		if(i==1 && (x==b[i]||x==c[i]||x==d[i]||x==e[i]||x==f[i])){
			cout<<"YES";
			flag=1;
			break;
		}
		
	}
	if(flag==0)
		cout<<"NO";
}
