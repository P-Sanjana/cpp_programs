#include<iostream>
#include<stdlib.h>
using namespace std;
template<typename T>
class Node{
	public:
	T info;
	Node *next,*prev;
	Node(T d){
		info=d;
		next=NULL;
		prev=NULL;
	}
};
template <class T>class List{
public:
Node<T>*first,*last;
List(){
	first=NULL;
	last=NULL;
}
void add(T n){
	if(first==NULL){
		first=new Node<T>(n);
		first->prev=NULL;
		last=first;
	}
	else{
		Node<T>*temp=new Node<T>(n);
		last->next=temp;
		temp->prev=last;
		last=temp;
	}
}
void addbegin(T n){
	if(first==NULL){
		first=new Node<T>(n);
		first->prev=NULL;
		last=first;
	}
	else{
		Node<T>*temp=new Node<T>(n);
		temp->next=first;
		first->prev=temp;
		temp->prev=NULL;
		first=temp;
	}
}
void del(T n){
	if(first->info==n){
		Node<T>*temp=first;
			
		first=first->next;
		first->prev=NULL;
	delete temp;
		
	}
	else{
		Node<T>*temp=first;
		while(temp->next!=NULL && temp->next->info!=n){
			temp=temp->next;
		}
		if(temp->next==NULL){
			cout<<"cannot find";
		}
		else{
			Node<T>*t=temp->next;
			temp->next=t->next;
		
			if(temp->next==NULL){
				last=temp;
			}
			else{
				t->next->prev=temp;
			}
			delete t;
		}
	}
}
void display(){
	Node<T>*temp;
	for(temp=first;temp!=NULL;temp=temp->next){
		cout<<temp->info;
	}
	cout<<"NULL";
}
};
int main(){
int n;
List<int>l;

cin>>n;
l.add(n);
cin>>n;
l.add(n);
cin>>n;
l.addbegin(n);
l.display();
cout<<"element to del";
cin>>n;
l.del(n);
l.display();

}

