#include<iostream>
#include<stdlib.h>
#include<string.h>
using namespace std;
class Node{
public:
int info;
Node*next;
Node(int d){
info=d;
next=NULL;
}
};
class List{
	public:
		int n;
		Node *first,*last;*temp;
		List(){
			first=NULL;
			last=NULL;
		}
		void add(int n){
			if(first==NULL){
				first=new Node(n);
				last=first;
			}
            else{
            	Node *temp=new Node(n);
            	last->next=temp;
            	last=temp;
				
			}
		}
		void addbegin(int n){
			if(first==NULL){
				first=new Node(n);
				last=first;
			}
			else{
				Node *temp=new Node(n);
				temp->next=first;
				first=temp;
			}
		}
		void reverse(){
			Node *temp=NULL;
			Node *c=first;
			Node *next1=NULL;
			while(c!=NULL){
				next1=c->next;
				c->next=temp;
				temp=c;
				c=next1;
				
				
		}
		first=temp;
	}
		void display(){
		Node *temp=first;
		while(temp!=NULL){
				cout<<temp->info;
				temp=temp->next;
		}
		
	}
	
		
};
	int main(){
	int n;
	List l;
	cin>>n;
	l.add(n);
	cin>>n;l.add(n);
	cin>>n;
	l.addbegin(n);
	cin>>n;
	l.add(n);
	l.reverse();
	l.display();	
}
