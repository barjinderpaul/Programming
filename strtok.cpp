// A C/C++ program for splitting a string 
// using strtok() 
#include<bits/stdc++.h>
using namespace std;
int main() 
{ 
	char str[] = "{a,b,c}" ;
int i=0;
	// Returns first token 
	while(i<8){
	char *token = strtok(str, ","); 
	i++;
}
	cout<<str;

	return 0; 
} 

