#include<iostream>
using namespace std;
class dequeue{
	public:
	int a[10],front,rear,count;
	dequeue(){
		front=-1;
		rear=-1;
		count=0;
	}
	void addbeg(int n){
		if(front=-1){
			front++;
			rear++;
			count++;
			a[rear]=n;
		}
		else if(rear>9){
			cout<<"overflow"<<endl;
		}
		else{
			for(int i=count;i>=0;i--){
				a[i]=a[i-1];
			}
			a[0]=n;
			count++;
			rear++;
		}
	}
	void addend(int n){
			if(front=-1){
			front++;
			rear++;
			count++;
			a[rear]=n;
		}
		else if(rear>9){
			cout<<"overflow"<<endl;
		}
		else{
			a[++rear]=n;
		}
	}
	void display(){
		if(front==-1){
			cout<<"empty"<<endl;
		}
		else{
			for(int i=front;i<=rear;i++){
				cout<<a[i]<<endl;
			}
		}
	}
	void delbeg(){
		if(front==-1){
			cout<<"empty"<<endl;
		}
		else if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			front=front+1;
		}
	
		}
	void delend(){
		if(front==-1){
			cout<<"empty"<<endl;
		}
		else if(front==rear){
			front=-1;
			rear=-1;
		}
		else{
			rear=rear-1;
		}
	}
};
int main(){
		dequeue d;
	int ch,n;
	while(1){
		cout<<"1.addend 2.addbeg 3.delbeg 4.addend 5.display 6.exit"<<endl;
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
			d.delbeg();
			break;	case 4:
			d.delend();
			break;
			case 5:d.display();
			break;
			case 6:exit(0);
			break;
		}
	}
}
