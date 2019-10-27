#include<bits/stdc++.h>
using namespace std;
int main(){
	int64_t jacket,sock,total;
	cin>>jacket>>sock>>total;
	total-=jacket;
	if((total/sock)%2==0){
		cout<<"Lucky Chef"<<endl;
	}else{
		cout<<"Unlucky Chef"<<endl;
	}
}
