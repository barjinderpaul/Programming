#include<bits/stdc++.h>
using namespace std;
int main(){
	int numberOfElements,moneyNote,count5=0,count10=0,flag=0,change=0;
	cin>>numberOfElements;	
	while(numberOfElements>0){
		cin>>moneyNote;
		if(moneyNote == 5){
			count5++;
		}
		else if(moneyNote == 10){
		
			count10++;
		}
		else
		numberOfElements--;
	}
}
