#include<bits/stdc++.h>
using namespace std;
//Sublist search for linked list as well as array :

/*

int main(){
	int a1[] = {1,2,3};
	int a2[] = {4,5,1,2,3,4,5};
	int flag = 0,count=0;
	int n1 = sizeof(a1)/sizeof(a1[0]);
	int n2 = sizeof(a2)/sizeof(a2[0]);
	for(int i=0;i<n2;i++){
		for(int j=0;j<n1;j++){
			if(a2[j] == a1[i])
				{
					if(count >= n1)
						break;
					count+=1;				//Not correct for all test cases;
					flag = 0;
					i++;
					j++;
					continue;
				}
			else
				flag = 1;
		}
	}
	if(flag == 0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
}
*/
//Sir's :

struct node{
	int data;
	node *next;
};
node *addnode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->next = NULL;
	return newnode;
}
bool sublist(node *first, node *second){
	node *curr1 = first;
	node *curr2 = second;
	if(first == NULL && second==NULL)
		return true;
	if( (first==NULL && second!=NULL ) || (first!=NULL && second==NULL))
		return false;  
	while(curr2!=NULL){
		node *temp = curr2;							//O(first*second)
		curr1 = first;
		while(curr1!=NULL){
			if(curr1->data != temp->data){
				break;
			}
			temp = temp->next;
			curr1 = curr1->next;
		}
		if(curr1 == NULL)
			return true;
		curr2 = curr2->next;
	}
}
int main(){
	//Assumption = second list is greater than the first list
	node *first = addnode(1);
	first->next = addnode(2);
	first->next->next = addnode(3);
	node *second = addnode(4);
	second->next = addnode(5);
	second->next->next = addnode(1);
	second->next->next->next = addnode(2);
	second->next->next->next->next = addnode(3);
	second->next->next->next->next->next = addnode(4);
	second->next->next->next->next->next->next = addnode(5);
	if(sublist(first,second))
		cout<<"Found"<<endl;
	else
		cout<<"Not Found"<<endl;
	}
