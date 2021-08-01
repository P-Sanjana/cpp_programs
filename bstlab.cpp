#include<iostream>
#include<stdlib.h>
using namespace std;
struct treenode{
	public:
	int data;
	treenode *left,*right;
};
	treenode *insert(treenode *node,int n){
		if(node==NULL){
			treenode *temp;
			temp=new treenode;
			temp->data=n;
			temp->right=NULL;
			temp->left=NULL;
			return temp;
		}
		else if(n>node->data){
			node->right=insert(node->right,n); 
		}
		else if(n<node->data){
			node->left=insert(node->left,n);
		}
		 return node;
	}
	treenode *FindMin(treenode *node){
		if(node==NULL){
			return NULL;
		}
		else if(node->left){
		FindMin(node->left);
	}
	else return node;
	}
	treenode *del(treenode *node,int n){
		treenode *t;
		if(node==NULL){
			cout<<"element not found"<<endl;
		}
		else if(n<node->data){
			node->left = del(node->left,n);
		}
		else if(n>node->data)
		{
			node->right=del(node->right,n);
		}
		else{
			if(node->left && node->right){
			t=FindMin(node->right);
			node->data=t->data;
			node->right=del(node->right,t->data);
		}
		else{
			t=node;
			if(node->left==NULL){
				node=node->right;
			}
			else if(node->right==NULL){
				node=node->left;
			}
			free(t);
		}
	}
	return node;
}
treenode *search(treenode *node,int n){
	if(node==NULL){
		cout<<"element not found"<<endl;
	}
	else if(node->data>n){
		return search(node->left,n);
	}
	else if(node->data<n){
		return search(node->right,n);
	}
	else
	return node;
}
treenode *search1(treenode *node,int n){
	if(node==NULL){
		cout<<"Element not found"<<endl;
	}
	else {
		while(node!=NULL){
			if(n>node->data){
				node=node->right;
			}
			else if(n<node->data){
				node=node->left;
			}
			else {
				return node;
			}
		}
	}
}

int main(){
	treenode *root=NULL,*temp;
	int n,ch;
	while(1){
		cout<<"1.insert 2.delete 3.search 4.search1 5.exit"<<endl;
		cout<<"enter your choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:cout<<"enter the element "<<endl;
			cin>>n;
			root=insert(root,n);
			break;
				case 2:cout<<"enter the element "<<endl;
			cin>>n;
			root=del(root,n);
			break;
				case 3:cout<<"enter the element "<<endl;
			cin>>n;
			temp=search(root,n);
			break;
				case 4:cout<<"enter the element "<<endl;
			cin>>n;
			temp=search1(root,n);
			break;
			case 5:exit(0);
			break;
		}
	}
	return 0;
}
