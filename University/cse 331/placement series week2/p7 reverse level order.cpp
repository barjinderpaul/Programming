#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *left,*right;
};
node *newNode(int data){
	node *newnode = new node;
	newnode->data = data;
	newnode->left = newnode->right = NULL;
	return newnode;
}

void insert(node **root,int data){
	node *curr = newNode(data);
	queue<node *>q;
	if(*root==NULL){
		*root = curr;
		return ;
	}
	q.push(*root);
	
	while(!q.empty()){
		node *temp = q.front();
		//cout<<"temp= "<<temp->data<<"\n";
		q.pop();
		if(!temp->left){
			temp->left = curr;
			return ;
		}else{
			q.push(temp->left);
		}
		if(!temp->right){
			temp->right = curr;
			return ;
		}
		else
			q.push(temp->right);
	}
}

void levelorderReverse(node *root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	stack<node*>s;
	s.push(root);
	s.push(NULL);
	while(q.size()>1){
		node *curr = q.front();
		q.pop();
		if(curr==NULL){
			s.push(NULL);
		}else{
			if(curr->left){
				s.push(curr->left);
				q.push(curr->left);
			}
			if(curr->right){
				s.push(curr->right);
				q.push(curr->right);
			}
			
		}
	}
	stack<node *>s2;
	while(!s.empty()){
		if(s.top()==NULL){
			//display
			cout<<"in if"<<"\n";
			while(!s2.empty()){
				node *c = s2.top();
				cout<<c->data<<" ";
				s2.pop();
			}
			cout<<"\n";
		}
		else{
			s2.push(s.top());
		}
		//popped element;
		node *cc = s.top();
		cout<<"Popped = "<<cc->data<<" size = "<<s.size()<<"\n";
		s.pop();
	}
		
}

int main(){
	node *root = NULL;
	int n,data;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>data;
		insert(&root,data);
		
	}
	cout<<"Levelorder = \n";
	levelorderReverse(root);
	
	
}
