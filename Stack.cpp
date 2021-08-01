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
class Stack{
	public:
	Node *top;
	Stack(){
		top=NULL;
	}
	void push(int n){
		Node *temp=new Node(n);
		temp->next=top;
		top=temp;
	}
	void pop(){
		int n;
		Node *temp;
		if(top==NULL){
			cout<<"Stack is empty";
		}
		temp=top;
		top=top->next;
		n=temp->info;
		delete temp;
		cout<<n<<"deleted";
	}
	void display(){
		Node *i;
		for(i=top;i!=NULL;i=i->next){
			cout<<i->info;
		}
	}
};
int main(){
	int i,n;
	Stack s;
	while(1){
		cout<<"1.push 2.pop 3.display 4.exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>i;
		switch(i){
			case 1:cout<<"Enter the number";
			cin>>n;
			s.push(n);
			break;
			case 2:s.pop();
			break;
			case 3:s.display();
			break;
			case 4:exit(0);
		}
	}
}
