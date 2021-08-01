#include<iostream>
#include<stdlib.h>
using namespace std;
class Stackadtarray{

	int *stk;
	int top;
	public:
		Stackadtarray(){
		stk=new int[10];
			top=-1;
			
			
		}
	void push(int d){
		if(top>9){
			cout<<"Stack is full";
			
		}
		else{
			stk[++top]=d;
		
		}
	}
	int pop(){
		if(top<0){
			cout<<"Stack is empty";
			
		}
		else{
			
			cout<<"deleted"<<stk[top--];
		}
	}
	void display(){
		if(top<0){
			cout<<"stack empty";
		}
		for(int i=top;i>=0;i--){
			cout<<stk[i];
		}
	}
};
int main(){
	int n;
	
	Stackadtarray s;
	while(1){
		cout<<"1.push 2.pop 3.display 4.exit"<<endl;
		cout<<"Enter your choice"<<endl;
		cin>>n;
		switch(n){
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
