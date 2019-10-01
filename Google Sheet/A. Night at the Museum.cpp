#include <bits/stdc++.h>
using namespace std;
 
int main() {
	{
	string s ;
	cin>> s ;
	int len = s.length() ;
	int Smoves = 0 ;
	int strt = 0 ; // a
	for(int i = 0 ; i < len ; i++ ) { //
		int index = s[i]-97 ; 
		int walk = abs(strt-index);
		if( walk > 13 ){
			Smoves +=  26 - walk ; 
		}else{
		    Smoves +=  walk ;
        }
		strt = index ; 
		}
	cout<<Smoves;
	return 0;
}
}
