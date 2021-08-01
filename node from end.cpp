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
		void nodefromend(int p){
			Node *nnode=NULL;
			Node *temp=first;
			for(int i=1;i<p;i++){
				if(temp!=NULL){
				
				temp=temp->next;
			}
			}
			while(temp!=NULL){
				if(nnode==NULL){
					nnode=first;
				}
				else{
					nnode=nnode->next;
				}
				temp=temp->next;
				}
				if(nnode!=NULL){
				
				cout<<nnode->info;
			}
			}
		};
		int main(){
	int n;
	int p;
	List l;
	cin>>n;
	l.add(n);
	cin>>n;l.add(n);
	cin>>n;
	l.addbegin(n);
	cin>>n;
	l.add(n);
	cin>>p;
	l.nodefromend(p);
}
