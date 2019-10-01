#include<bits/stdc++.h>
using namespace std;
int main(){
	uint64_t n,k;
	cin>>n>>k;
	vector<float>time;
	float value;
	for(uint64_t i=0;i<k;i++){
		cin>>value;
		time.push_back(value);
	}
	sort(time.begin(),time.end(),greater<uint64_t>());
	//cout<<"time 0 = "<<time[0]<<endl;
	//cout<<" time 1 = "<<time[1]<<endl;
	float res=0.0;
	res = time[1]/2;
	
	res+=time[2];
	if(time[2]!=time[3])
		res+=time[3];
//	cout<<"second = "<<time[1];
//	cout<<"third = "<<time[2];
//	cout<<"res = "<<res;
	std::cout.setf( std::ios::fixed, std:: ios::floatfield); 
	std::cout<<std::setprecision(9)<<res;
	
}
