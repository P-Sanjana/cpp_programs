#include<iostream>
#include<stdlib.h>
using namespace std;
class Node{
	public:
	int info;
	Node *next;
	Node(int d){
		info=d;
		next=NULL;
	}
};
class List{
	public:
	Node *first;
	List(){
		first=NULL;
	}
	void add(int n){
		if(first==NULL){
			Node*temp=new Node(n);
			first=temp;
			temp->next=first;
		}
		else{
			Node*temp=first;
			while(temp->next!=first){
				temp=temp->next;
			}
			
			Node *t=new Node(n);
			temp->next=t;
			t->next=first;
		}
	}
	void addbegin(int n){
			if(first==NULL){
			Node*temp=new Node(n);
			first=temp;
			first->next=temp;
		}
		else{
			Node*temp=first;
			while(temp->next!=first){
				temp=temp->next;
			}
		
			Node *t=new Node(n);
			temp->next=t;
			t->next=first;
			first=t;
		}
	}
	void del(int n){
		if(first->info==n){
				Node*temp=first;
			while(temp->next!=first){
				temp=temp->next;
			}
			//temp=temp->next;
			Node*t=first;
			first=first->next;
			temp->next=first;
			delete t;
			
		}
		else{
			Node*temp=first;
			while(temp->next!=first && temp->next->info!=n){
				temp=temp->next;
			}
			if(temp->next==first){
				cout<<"cannot";
			}
			else{
				Node*t=temp->next;
				
				if(t->next==first){
					temp->next=first;
				}
			else{
				temp->next=t->next;
			}
			delete t;
			}
		}
	}
	void display(){
		Node*temp=first;
	do{
		cout<<temp->info;
		temp=temp->next;
	}
	while(temp!=first);
		
	}
};
int main(){
	List l;
	int n;
	cin>>n;
	l.add(n);
		cin>>n;
	l.add(n);
		cin>>n;
	l.addbegin(n);
	l.display();
	cin>>n;
	l.del(n);
	l.display();
}
