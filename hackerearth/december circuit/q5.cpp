#include<bits/stdc++.h>
using namespace std;
#define ASCII_SIZE 256
int getMaxOccuringChar(string s,int n) 
{ 		char str[n];
		for(int i=0;i<n;i++){
			str[i]=s[i];
		}
    // Create array to keep the count of individual 
    // characters and initialize the array as 0 
    int count[ASCII_SIZE] = {0}; 
  
    // Construct character count array from the input 
    // string. 
    int len = strlen(str); 
    int max = 0;  // Initialize max count 
    char result;   // Initialize result 
  
    // Traversing through the string and maintaining 
    // the count of each character 
    for (int i = 0; i < len; i++) { 
        count[str[i]]++; 
        if (max < count[str[i]]) { 
            max = count[str[i]]; 
            result = str[i]; 
        } 
    } 
 	 cout<<result;
  return max; 
} 

int main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		string s;
		int maxLen=-1;
		cin>>s;
		for(int i=0;i<n;i++){
			for(int j=0;i<n;j++){
				string r = s.substr(i,j);
				int count = getMaxOccuringChar(r,n);
				if(count>=n/2){
					if(maxLen<j-i+1){
						maxLen=j-i+1;
					}
				}
			}
		}
		cout<<maxLen;
		
	}
	
}
