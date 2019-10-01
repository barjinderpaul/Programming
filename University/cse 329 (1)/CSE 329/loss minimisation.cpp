#include<bits/stdc++.h>
using namespace std;
struct data{
int late,day,index;   // it contain li, Ti , and index to print them.
};
bool compare(data a, data b){
	return ((a.late * b.day) > (b.late * a.day));
}
void print_optimal(data ar[], int n){
	stable_sort(ar,ar+n,compare);
	for(int i=0;i<n;i++)
		cout<<ar[i].index<<" ";
}
int main(){
		int n;
		cin>>n;
	struct data ar[n];	
	for(int i=0;i<n;i++){
		cin>>ar[i].late;
		ar[i].index=i;
		cin>>ar[i].day;
	}
		print_optimal(ar,n);

	}

