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
			void display1(){
			Node *temp;
			for(temp=first;temp!=NULL;temp=temp->next){
				cout<<temp->info<<"->";
			}
		}
		int nullorcycle(){
			int flag=0;
			Node *slow=first;
			Node *fast=first;
			while(slow!=NULL && fast!=NULL &&fast->next!=NULL){
				slow=slow->next;
				fast=fast->next->next;
				if(slow==fast){
					return 1;
				}
				else{
					return 0;
				}
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
	l.display1();
	int i=l.nullorcycle();
	if(i==1){
	cout<<"cycle";
	}
	else{
		cout<<"not";
	}
}
