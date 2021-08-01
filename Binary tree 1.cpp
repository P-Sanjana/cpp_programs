#include<iostream>
#include<stdlib.h>
#define COUNT 10
using namespace std;
class Node{
	public:
		int data;
		Node *right,*left;
		Node(int d){
			data=d;
			right=NULL;
			left=NULL;
		}
};
class BT{
	public:
		Node *root;
		BT(){
			root=NULL;
		}
		void createnode(int n){
			root=new Node(n);
		}
		void add(int m,int n,char c){
			addnode(root,m,n,c);
		}
		void addnode(Node *temp,int m,int n, char c){
			if(temp==NULL){
				return;
			}
			else{
				if(temp->data==m){
					Node *t=new Node(n);
					if(c=='l'){
						temp->left=t;
						return;
					}
					else{
						temp->right=t;
						return;
					}
				}
				else{
					addnode(temp->left,m,n,c);
					addnode(temp->right,m,n,c);
				}
			}
		}
/*void del(int m,char c){
			 delet(root,m,c);
		}
		void delet(Node *temp,int m,char c){
			if(temp==NULL){
				cout<<"NULL"<<endl;
			}
			else if(temp->data==m){
				if(c=='l'){
					Node *t=temp->left;
					delete t;
					cout<<"deleted";	
				}
				else{
					Node *t=temp->right;
					cout<<"deleted";
					delete t;	
				}	
				}
				else{
					delet(temp->left,m,c);
					delet(temp->right,m,c);
				}
			
			if(temp->data!=m){
				cout<<"not found"<<endl;
			}
		
		}*/
		void sort(Node *root){
			if(root==NULL){
				return;
			}
				else if(root->data>root->left->data){
				int temp;
				root->data=temp;
				root->data=root->left->data;
				root->left->data=temp;
			}
			else{
				int temp;
				root->data=temp;
				root->data=root->right->data;
				root->right->data=temp;
			}
			sort(root->left);
			sort(root->right);
		}
		void print(int space){
			display(root,space);
		}
		void display(Node *temp,int space){
			if (temp==NULL){
				return;
			}
			else{
				space+=COUNT;
				cout<<endl;
				display(temp->right,space);
				cout<<endl;
				for(int i=COUNT;i<space;i++){
					cout<<" ";}
					cout<<temp->data;
					display(temp->left,space);
				
			}
		}
};
int main(){
	BT b;
	b.createnode(1);
	b.add(1,5,'l');
	b.add(1,3,'r');
	b.add(2,2,'l');
	b.add(2,4,'r');
	b.print(0);
		b.sort(b.root);//b.del(1,'r');
		b.print(0);
}
