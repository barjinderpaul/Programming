#include<bits/stdc++.h>
using namespace std;

int CountUniqueCharacters(string str){
    int count = 0;

    for (int i = 0; i < str.length(); i++){
         bool appears = false;
         for (int j = 0; j < i; j++){
              if (str[j] == str[i]){
                  appears = true;
                  break;
              }
         }

         if (!appears){
             count++;
         }
    }

    return count;
}

int main(){
	string s1;
	cin>>s1;
	int c=CountUniqueCharacters(s1);
	if(c%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";
		
}
