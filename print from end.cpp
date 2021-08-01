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
		void display(Node *first){
			if(first==NULL){
				cout<<"NULL";
			}
			else{
				display(first->next);
				cout<<first->info;
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
	l.display(l.first);
}
