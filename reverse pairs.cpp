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
				cout<<temp->info;
			}
		}
		
		void display(){
			int c=0;
			Node *temp;
			for(temp=first;temp!=NULL;temp=temp->next){
				c++;
			}
			if(c%2==0){
				for(temp=first;temp!=NULL;temp=temp->next->next){
					int t=temp->info;
					temp->info=temp->next->info;
					temp->next->info=t;
				}
				for(temp=first;temp!=NULL;temp=temp->next){
					cout<<temp->info<<"->";
				}
				cout<<"NULL";
			}
			else{
				for(temp=first;temp!=NULL;temp=temp->next->next){
					int t=temp->info;
					temp->info=temp->next->info;
					temp->next->info=t;
				}
				for(temp=first;temp!=NULL;temp=temp->next){
					cout<<temp->info<<"->";
				}
				cout<<temp->next->info<<"->NULL";
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
		l.display();
}

