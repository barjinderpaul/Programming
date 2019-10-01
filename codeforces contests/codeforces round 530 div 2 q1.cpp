#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int w,h,u1,d1,u2,d2;
	cin>>w>>h;
	cin>>u1>>d1;
	cin>>u2>>d2;
	int finalW = w+h;

	if(d1>d2){
		while(h>0){
			h--;
			finalW+=h;
			if(h==d1){
				if(finalW-u1<0){
					finalW=0;
					h--;
					finalW+=h;
				}else{
					finalW-=u1;
					h--;
					finalW+=h;
				}
			}
			if(h==d2){
				if(finalW-u2<0){
					finalW=0;
					h--;
					finalW+=h;
				}else{
					finalW-=u2;
					h--;
					finalW+=h;
				}
			}
			
		}
	}else{
		while(h>0){
			
			if(h==d2){
				if(finalW-u2<0){
					finalW=0;
					h--;
					finalW+=h;
				}else{
					finalW-=u2;
					h--;
					finalW+=h;
				}
			}
			
			if(h==d1){
				if(finalW-u1<0){
					finalW=0;
					h--;
					finalW+=h;
				}else{
					finalW-=u1;
					h--;
					finalW+=h;
				}
			}
		
			h--;
			finalW+=h;
		}	
	}
	cout<<finalW+1;	
}
