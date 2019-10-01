#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int preOrder[n];
	int inOrder[n];
	for(int i=0;i<n;i++)
		cin>>preOrder[i];
	for(int i=0;i<n;i++)
		cin>>inOrder[i];

	vector<int>post;	
	//finding postorder from inorder and preorder
	//doubling of tree;		
	int i=0;
	int rootIndex;
	int visited[100000]={0};
	int j=0;
	while(i<n){
		for(int i=0;i<n;i++){
			if(inOrder[i]==preOrder[j]){
				rootIndex = i;
				visited[preOrder[i]]=1;
				j++;
				break;
			}
		}
		for(int i=0;i<rootIndex;i++){
			
		}
	i+=1;
	}
}		
