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
		Node *recursive(Node *f){
			if(f==NULL){
				cout<<"NULL";
			}
			if(f->next==NULL){
				return f;
			}
			Node *secondelement=f->next;
			f->next=NULL;
			Node *rev=recursive(secondelement);
			secondelement->next=f;
			return rev;
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
	Node *k=l.recursive(l.first);
	Node *i;
	for(i=k;i!=NULL;i=i->next){
		cout<<i->info<<"->";
	}
	cout<<"NULL";
}
