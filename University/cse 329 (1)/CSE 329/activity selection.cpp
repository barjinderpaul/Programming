// Activity Selection


#include<bits/stdc++.h>
using namespace std;
struct activity{
	int start,finish;
};
bool compare(activity a, activity b){
	return a.finish < b.finish;
}
void select_activity(activity arr[], int n){
	sort(arr,arr+n,compare);
	int i=0;
	cout<<"("<<arr[i].start<<" "<<arr[i].finish<<"), ";
	for(int j=1;j<n;j++){
		if(arr[j].start>=arr[i].finish){
			cout<<"("<<arr[j].start<<" "<<arr[j].finish<<"), ";
			i=j;
		}
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
	int l;
	cin>>l;
 //activity *arr=new activity[l];   // we can declare like this also
 struct activity arr[l];
	for(int i=0;i<l;i++)
		cin>>arr[i].start;
	for(int i=0;i<l;i++)
		cin>>arr[i].finish;
		select_activity(arr,l);
	} // end while
		return 0;
} //end main


