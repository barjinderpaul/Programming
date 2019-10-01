//Greedy Algorithms :
/*
1. Job Sequencing Problem :
N = 4 (Jobs)
Li = 3,2,1,4; (loss if job not done)
Ti = 2,1000,4,5;	(time taken to complete a job)
How much loss and how much time to complete the jobs, In which sequence the job should be perfomed such that loss is minimum ?
examples of this concept : In os , if resources are to be shared (CPU Scheduling)
							In manufacturing or any other sector where things are to be processed.
				
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	
	int n,sum = 0,l,t;
	cin>>n;	
	vector<int> loss,time;
	for(int i=0;i<n;i++){
		cin>>l>>t;
		loss.push_back(l);
		time.push_back(t);
	}
	reverse(loss.begin(),loss.end());
	sort(time.begin(),time.end());
	reverse(time.begin(),time.end());
	for(int i=0;i<n;i++){
		cout<<loss[i] <<" " <<time[i]<<endl;
	}
			
}
