#include<bits/stdc++.h>
using namespace std;

int recursiveBinarySearch(int a[],int low,int high,int searchNumber){
	if(low<=high){
		int mid = (low+high)/2;
		if(a[mid] == searchNumber)
			return mid;
		if(a[mid]<searchNumber)
			return recursiveBinarySearch(a,mid+1,high,searchNumber);
		else
			return recursiveBinarySearch(a,low,mid-1,searchNumber);
	}
	return -1;
}

int jumpSearch(int a[],int n,int searchNumber){
	int steps = sqrt(n);
	int prev = 0;
	while( a[min(steps,n)-1] < searchNumber){
		prev = steps;
		steps+=sqrt(n);
		if(prev>=n)
			return -1;
	}
	//After the above while loop, we get a block in which our 
	//element could be present
	
	//Now, we perform Linear Search in that block;
	while(a[prev] < searchNumber){
		prev++;
		if(prev == min(steps,searchNumber))
			return -1;
	}
	if(a[prev] == searchNumber)
			return prev;
	return -1;
		
}

int main(){
	int n,searchNumber,flagLinear = 0;
	cin>>n;
	//int a[n]; //static memory allocation //cannot be freed;
	int *a = new int[n]; //dynamic memory allocation //can be freed;
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<"elements of the array ";
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	
	//Searching in an array : 
	cin>>searchNumber;
	
	//Linear Search  = O(n)
	cout<<endl<<"Linear Search"<<endl;
	for(int i=0;i<n;i++){
		if(a[i] == searchNumber){
			flagLinear = 0;
			cout<<"element found first at "<<i<<endl;;
			break;
		}
		else
			flagLinear = 1;
	}
		if(flagLinear == 1)
			cout<<"element no found "<<endl;
	
	
	//Binary Search = O(Logn)
		sort(a,a+n);  //Binary Search requires sorted array
	//Iterative Binary Search : 
	cout<<endl<<"Iterative Binary Search"<<endl;
	int low = 0, high = n-1,flagBinary = 1;
		while(low<=high){
			int mid = (low+high)/2;
			if(a[mid] == searchNumber){
				cout<<"Element at = "<<mid<<endl;
				flagBinary = 0;
				break;
			}
			if( a[mid] < searchNumber)
				low = mid+1;
			else
				high = mid-1;
				
		}
		if(flagBinary == 1)
			cout<<"Element not found "<<endl;
	
	
	//Binary Search = O(Logn)
	
	//Recursive Binary search
	cout<<"Recursive Binary Search "<<endl; 
	int ans = recursiveBinarySearch(a,0,n-1,searchNumber);
		if(ans == -1)
			cout<<"Element not found"<<endl;
		else
			cout<<"Element foundt at "<<ans<<endl;
			
	//Jump Search = O(sqrt(n))
	//Assumes array to be sorted : 
	cout<<"Jump Search "<<endl;
	sort(a,a+n);
	int ansJump = jumpSearch(a,n,searchNumber);
	if(ansJump == -1)
		cout<<"Element not found"<<endl;
	else
		cout<<"Element found at "<<ansJump<<endl;
	free(a);	
}
