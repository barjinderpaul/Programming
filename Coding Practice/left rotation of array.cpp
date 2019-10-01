#include<bits/stdc++.h>
using namespace std;
int main(){
	int sizeofArray,numberOfRotations;
	cin>>sizeofArray;
	int array[sizeofArray];
	cin>>numberOfRotations;
	for(int i=0;i<sizeofArray;i++){
		cin>>array[i];
	}
	for(int i=0;i<sizeofArray;i++){
		if(numberOfRotations>sizeofArray){
			numberOfRotations-=sizeofArray;
		}
		else{
			array[(i+sizeofArray-numberOfRotations)%sizeofArray] = array[i];
		}
	}
	for(int i=0;i<sizeofArray;i++){
		cout<<array[i];
	}
}
