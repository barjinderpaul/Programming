#include<iostream>
#include<string>
using namespace std;

int string_to_integer(char s[], int n,int &finalNum){
    if(n==-1){
        return 0;
    }
    cout<<"finalNum, s[0] - "<<finalNum<<" "<<s[0]<<"\n";
    finalNum = finalNum*10 + s[0]-'0';
    return string_to_integer(s+1,n-1,finalNum);
}

int main(){
    char s[] = {'2','1','1'};
    int length = sizeof(s)/sizeof(s[0]);
    int finalNum=0;
    int a = string_to_integer(s,length-1,finalNum);
    cout<<finalNum;
}