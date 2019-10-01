#include<bits/stdc++.h>
using namespace std;
#define mod 1e9+7;00
vector<uint64_t> resultantVector;
double roundingFunction(double input)
{
	if(abs(input-floor(input))>.5000000000)
		return ceil(input);
	else
		return floor(input);
}
int main(){
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	uint64_t testCases,input,kValue,answer01,testCase1,answerY;
	uint64_t valueM;
	cin>>testCases;
	while(testCases--)
	{
		answer01=1;
		cin>>input>>kValue;
		testCase1=input;
		answerY=kValue;
		while(kValue!=1)
		{
			valueM=roundingFunction(((double)input/(double)kValue+(double)kValue/(double)2));
			input=input-valueM;
			resultantVector.push_back(valueM);
			kValue--;
			
		}
		resultantVector.push_back(input);
		for(int i=0;i<resultantVector.size();i++)
	    	answer01=(answer01*resultantVector[i])%(1000000007);
   		for(int i=0;i<resultantVector.size();i++)
	   	 answer01=(answer01*(resultantVector[i]-1))%(1000000007);
	    if(testCase1<(answerY*(answerY+1)/2))
	    	cout<<-1<<endl;
	    else
	    	cout<<answer01<<endl;
		resultantVector.clear();
	}}

