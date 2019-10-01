#include<bits/stdc++.h>
using namespace std;

int calHappy(int n,int &count){
	cout<<" N = "<<n<<endl;
	if(count==1000)
		return 0;
	int digitSum=0;
	while(n){
		digitSum+= pow(n%10,2);
		n/=10;
	}
	count++;
	cout<<"New Number = "<<digitSum<<endl;
	if(digitSum==1)
		return 1;
	return calHappy(digitSum,count);
}

int main(){
	int n,count=0;
	cin>>n;
	if(calHappy(n,count))
		cout<<"True"<<endl;
	else
		cout<<"False"<<endl;
}
