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
class List1{
	public:
		int n;
		Node *first,*last;*temp;
		List1(){
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
	};
	class List2{
	public:
		int n;
		Node *first,*last;*temp;
		List2(){
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
	};
	class List3{
		List1 l1;
		List2 l2;
		public: 
		int n;Node *first,*last,*temp;
		List3(){
			first=NULL;
				last=NULL;
		}
		void intersecting(Node *x,Node *y){
			int c1=0,c2=0,d=0;
			Node *a=x;
			Node *b=y;
			while(a!=NULL){
				c1++;
				a=a->next;
			}
			while(b!=NULL){
				c2++;
				b=b->next;
			}
			if(c2<c1){
				d=c1-c2;
				a=x;
				b=y;
			}
			else{
				d=c2-c1;
				a=y;
				b=x;
			}
			for(int i=0;i<d;i++){
				a=a->next;
			}
			while(a!=NULL&&b!=NULL){
				if(a==b){
					cout<<a->info;
				}
				a=a->next;
				b=b->next;
			}
		}
	};
int main(){
	int n;
	List1 l1;
	cin>>n;
	l1.add(n);
	cin>>n;l1.add(n);
	cin>>n;
	l1.addbegin(n);
	List2 l2;
	cin>>n;
	l2.add(n);
	cin>>n;l2.add(n);
	cin>>n;
	l2.addbegin(n);
	cin>>n;
	l1.add(n);
	List3 l3;
	l3.intersecting(l1.first,l2.first);
	return 0;
}
