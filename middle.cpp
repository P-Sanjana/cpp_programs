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
		int middle(){
			int i=0;
		Node *p1=first;
		Node *p2=first;
		while(p1!=NULL){
			if(i==0){
				p1=p1->next;
				i=1;
			}
			else if(i==1){
				p1=p1->next;
				p2=p2->next;
				i=0;
			}
		}
		return p2->info;
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
	cin>>n;
	l.add(n);
	int k=l.middle();
	cout<<k;
}
