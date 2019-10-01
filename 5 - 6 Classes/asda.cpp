#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		for(int i = 0;i<n;i++){
			int newFlag = 0;
			int flag = 0;
			int maxx=0,maxx2=0;
			cin>>s;
			for(int i=0;i<s.length();i++){
				if( (int)s[i] == 89 )
					continue;
				else if( (int)s[i] >=91 && s[i] <= 100 && flag==0){
					flag = 1;
					 if ((int)(s[i] == 91))
					 	maxx = i+0 + 1; 
					else if ((int)(s[i] == 92))
					 	maxx = i+1 + 0; 
					else if ((int)(s[i] == 93))
					 	maxx = i+1 + 2;
					else if ((int)(s[i] == 94))
					 	maxx = i+1 + 3;
					else if ((int)(s[i] == 95))
					 	maxx = i+1 + 4;
					else if ((int)(s[i] == 96))
					 	maxx = i+1 + 5;
					else if ((int)(s[i] == 97))
					 	maxx = i+1 + 6;
					else if ((int)(s[i] == 98))
					 	maxx = i+1 + 7;
					else if ((int)(s[i] == 99))
					 	maxx = i+1 + 8;
					else if ((int)(s[i] == 100))
					 	maxx = i+1 + 9; 
			 
				}
				
		else if( (int)s[i] >=91 && s[i] <= 100 && flag==1){
					flag = 0;
					 if ((int)(s[i] == 91))
					 	maxx2 = i-0 + 1; 
					else if ((int)(s[i] == 92))
					 	maxx2 = i+1 + 1; 
					else if ((int)(s[i] == 93))
					 	maxx2 = i+1 + 2;
					else if ((int)(s[i] == 94))
					 	maxx2 = i+1 + 3;
					else if ((int)(s[i] == 95))
					 	maxx2 = i+1 + 4;
					else if ((int)(s[i] == 96))
					 	maxx2 = i+1 + 5;
					else if ((int)(s[i] == 97))
					 	maxx2 = i+1 + 6;
					else if ((int)(s[i] == 98))
					 	maxx2 = i+1 + 7;
					else if ((int)(s[i] == 99))
					 	maxx2 = i+1 + 8;
					else if ((int)(s[i] == 100))
					 	maxx2 = i+1 + 9; 
			 
				}
			if(maxx2 >= maxx)
			{
				newFlag = 1;
			
			}
			
			if(newFlag == 1){
				cout<<"Unsafe"<<endl;
				break;}
				
			
	
			}
		}
		
	}
}
