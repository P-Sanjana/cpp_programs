#include<iostream>
using namespace std;
class node{
	public:
	int data;
	node *next,*prev;
	
};
class dequeue{
	public:
	node *head,*last;
	int top1,top2;
	dequeue(){
		head=NULL;
		last=NULL;
		top1=top2=0;
	}
	void addbeg(int n){
		node *t;
		if(top1+top2>=5){
			cout<<"overflow"<<endl;
		}
		if(top1+top2==0){
			head=new node;
			head->data=n;
			head->next=NULL;
			head->prev=NULL;
			last=head;
			top1++;
		}
		else{
		
			t=new node;
			t->data=n;
			t->next=head;
			t->prev=NULL;
			head->prev=t;
			head=t;
			top1++;
	}
	}
	void addend(int n){
		node *t;
			if(top1+top2>=5){
			cout<<"overflow"<<endl;
		}
		if(top1+top2==0){
			head=new node;
			head->data=n;
			head->next=NULL;
			head->prev=NULL;
			last=head;
			top1++;
		}
	else{
	
			top2++;
			t=new node;
			t->data=n;
			t->next=NULL;

			t->prev=last;
			last->next=t;
			last=t;
	}
	}
	void popbeg(){
		if(top1+top2<=0){
			cout<<"overflow"<<endl;
		}
		else{
		head=head->next;
		head->prev=NULL;
		top1--;	
		}
	}
	void popend(){
		if(top1+top2<=0){
			cout<<"overflow"<<endl;
		}
		else{
			last=last->prev;
			last->next=NULL;
			top2--;
		}
	}
	void display(){
		if(top1+top2<=0){
			cout<<"empty"<<endl;
		}
		else{
		node *t=head;
		while(t!=NULL){
			cout<<t->data<<" ";
			t=t->next;
		}
		}
	}
	
};
int main(){
		dequeue d;
	int ch,n;
	while(1){
		cout<<"1.addbeg 2.addend 3.delbeg 4.delend 5.display 6.exit"<<endl;
		cout<<"choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1:cout<<"number"<<endl;
			cin>>n;
			d.addbeg(n);
			break;
				case 2:cout<<"number"<<endl;
			cin>>n;
			d.addend(n);
			break;
				case 3:
			d.popbeg();
			break;	case 4:
			d.popend();
			break;
			case 5:d.display();
			break;
			case 6:exit(0);
			break;
		}
	}
}
