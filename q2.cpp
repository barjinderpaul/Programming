#include<bits/stdc++.h>
using namespace std;
int main(){
	int testC;
	cin>>testC;
	while(testC--){
		uint64_t tnewT, bobLucky ,aliceLucky,input;
		cin>>tnewT>>bobLucky>>aliceLucky;
		vector<uint64_t> bob;
		vector<uint64_t> alice;
		uint64_t firstLucky=0,secondLucky=0,thirdLucky=0;
		for(uint64_t i=0;i<tnewT;i++){
			cin>>input;
			if( (input%bobLucky==0) && (input%aliceLucky!=0))
				firstLucky+=1;
			if((input%bobLucky!=0) && (input%aliceLucky==0))
				secondLucky+=1;
			if((input%bobLucky==0) && (input%aliceLucky==0))
				thirdLucky+=1;
		}
			if(bobLucky==aliceLucky){
				if(thirdLucky>0)
					cout<<"BOB"<<endl;
			else
				cout<<"ALICE"<<endl;
		}
	else{
		if(bobLucky%aliceLucky==0 )
			cout<<"ALICE"<<endl;
		else if(aliceLucky%bobLucky==0)
			cout<<"BOB"<<endl;
		else{
			if(firstLucky==secondLucky && firstLucky!=0 && thirdLucky!=0)
				cout<<"BOB"<<endl;
			else if(firstLucky>secondLucky && firstLucky!=0)
				cout<<"BOB"<<endl;
			else
				cout<<"ALICE"<<endl;
			
		}
	}
	
	}
}



