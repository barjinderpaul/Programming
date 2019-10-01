#include<bits/stdc++.h>
using namespace std;
int main(){
	int y,b,r,fy,fb,fr,flag=0;
	cin>>y>>b>>r;
	if(y<=b){
		fy = y;
		fb = y+1;
		flag=1;
	//	cout<<"fy fb = "<<fy<<fb<<endl;
	}
	else if(y>b){
		fy = b-1;
		fb=b;
		flag=1;
		}
	if(flag==1){
		if(fb>=r){
			fb = r-1;
			fy=fb-1;
			fr = r;
			//cout<<"fy fb = "<<fy<<fb<<endl;
		}
		else{
			fr=fb+1;
		}
	}
//	cout<<"fy, fb, fr="<<fy<<fb<<fr<<endl;
	cout<<fy+fb+fr;
}
