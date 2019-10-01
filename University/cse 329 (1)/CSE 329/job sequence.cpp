//Job Sequences


#include<bits/stdc++.h>
using namespace std;
struct data1{
	int index;
	int deadline;
	int profit;
};
bool compare(data1 a, data1 b){
	return a.profit > b.profit;
}
void print_job_sequence(data1 arr[] , int n){
	sort(arr,arr+n,compare);
	bool *check = new bool[n];
	int tot_sum_of_profit=0, no_of_job=0;
	for(int i=0;i<n;i++)
		check[i]=false; 
	for(int i=0;i<n;i++){
		for(int j=arr[i].deadline-1;j>=0;j--){
			if(check[j]==false){
				check[j]=true;
				tot_sum_of_profit+=arr[i].profit;
				no_of_job+=1;
				break;
			}
		}
	}
	cout<<no_of_job<<" "<<tot_sum_of_profit<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,i;
		cin>>n;
		struct data1 arr[n];
		for(i=0;i<n;i++)
		{
			cin>>arr[i].index;
			cin>>arr[i].deadline;
			cin>>arr[i].profit;
		}
		print_job_sequence(arr,n);
	}
return 0;
}

