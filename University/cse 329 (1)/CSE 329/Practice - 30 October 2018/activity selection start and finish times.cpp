#include<bits/stdc++.h>
using namespace std;
struct Job{
	int startTime;
	int finishTime;
};
bool compare(Job a, Job b){
	return (a.finishTime < b.finishTime);
}

void printActivities(Job arr[],int n){
	int count = 0;
	int i=0;
	cout<<i<<" ";
	count+=1;
	int j=0;
	for(int j=1;j<n;j++){
		if( arr[j].startTime >= arr[i].finishTime){
			cout<<j<<" ";
			count+=1;
			i = j;
		}
	}
		cout<<endl<<"totol count  = " <<count;
}

int main(){
	int n;
	cin>>n;
	Job array[n];
	for(int i = 0 ;i<n;i++)
		cin>>array[i].startTime>>array[i].finishTime;
	sort(array,array+n,compare);
	printActivities(array,n);
}
