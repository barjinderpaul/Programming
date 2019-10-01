#include<bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int count=0;
		vector<string> words;
		string s1;
		for(int i=1;i<=n;i++)
		{
		int j=0;
		cin>>s1;
		
		if ( find(words.begin(), words.end(), s1) != words.end() ){
			words.push_back(s1);
		//	cout<<"word = "<<s1<< "and function called is present "<<endl;
			int count2=0;
			//If word present in vector
		int flag=0;  //flag = 0 = left hand  //flag = 1 = right hand
		for(int i=0;i<s1.length();i++){
			if(j<1){
				if(s1[i] == 'd' || s1[i] == 'f' )
				{
					count2+=2;
					flag = 0;
					j=1;
				}
			else if( s1[i] == 'j'  || s1[i] == 'k'){
					count2+=2;
					flag = 1;
					j=1;
				}
			}
			else {
				if( (flag == 0) && ( s1[i]=='d' || s1[i]=='f' ) ){
					count2+=4;
					flag = 0;
				}
				else if ( (flag==0) && ( s1[i]=='j' || s1[i]=='k' ) ){
					count2+=2;
					flag = 1;
				}
				else if( (flag == 1) && ( s1[i] == 'j' || s1[i]=='k') ){
					count2+=4;
					flag = 1;
				}
				else if ( (flag == 1) && ( s1[i] == 'd' || s1[i]== 'f' ) ){
					count2+=2;
					flag = 0;
				}
			}
			if(i == s1.length() -1 ){
			//	cout<< "count2 if before divide = "<<count;
				count2 = count2/2;		
			//	cout<< "count2 if after divide = "<<count;
		}
			}
			count+=count2;
		}
		
		else {
			words.push_back(s1);
		//	cout<<"word = "<<s1<< "and function called is not present "<<endl;
		
			
				//If Word not present in vector
		int flag=0;  //flag = 0 = left hand  //flag = 1 = right hand
		for(int i=0;i<s1.length();i++){
			if(j<1){
				if(s1[i] == 'd' || s1[i] == 'f' )
				{
					count+=2;
					flag = 0;
					j=1;
				}
			else if( s1[i] == 'j'  || s1[i] == 'k'){
					count+=2;
					flag = 1;
					j=1;
				}
			}
			else {
				if( (flag == 0) && ( s1[i]=='d' || s1[i]=='f' ) ){
					count+=4;
					flag = 0;
				}
				else if ( (flag==0) && ( s1[i]=='j' || s1[i]=='k' ) ){
					count+=2;
					flag = 1;
				}
				else if( (flag == 1) && ( s1[i] == 'j' || s1[i]=='k') ){
					count+=4;
					flag = 1;
				}
				else if ( (flag == 1) && ( s1[i] == 'd' || s1[i]== 'f' ) ){
					count+=2;
					flag = 0;
				}
			}
		}
			//	cout<< "count in else  = "<<count;	
		}
 
		
		
	
	}
	cout<<count<<endl;
}
}
