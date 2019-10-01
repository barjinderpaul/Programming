#include<bits/stdc++.h>
using namespace std;

struct Job{
	int id;
	int deadline;
	int profit;
};

bool comparison(Job a, Job b)
	{
		return (a.profit > b.profit);
	}

void printJobs(Job arr[],int n){
	int result[n];
	bool slot[n];
	for(int i=0;i<n;i++)
		slot[i] = false;
	for(int i=0;i<n;i++){
		for(int j=min(n,arr[i].deadline)-1;j>=0;j--){
			if(slot[j] == false){
			//	cout<<" i = " <<i<<" j = "<<j<<endl;
			//	cout<<" n = "<<n<<" arr[i].deadline "<<arr[i].deadline<<endl;
				result[j] = i;
				slot[j] = true;
				break;
			}
		}
	}
	
	for(int i=0;i<n;i++)
		if(slot[i])
			cout<<arr[result[i]].id<<" ";
}

int main(){
	int n;
	cin>>n;
	Job arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i].id>>arr[i].deadline>>arr[i].profit;
		sort(arr,arr+n,comparison);
		printJobs(arr,n);
	}
	
	

