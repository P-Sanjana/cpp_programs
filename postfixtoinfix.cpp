#include<iostream>
#include<stack>
using namespace std;
class postfix{
	char po[10],in[10];
	public:
		stack<char>s;
		void read(){
			cout<<"Enter the expression"<<endl;
			cin>>in;
		}
		int isoperator(char c){
			if(c=='+'|| c=='-'||c=='*'|| c=='/'){
				return 1;
			}
			else
			return 0;
		}
		int precedence(char c){
			if(c=='+' ||c=='-'){
				return 1;
			}
			else if(c=='*'|| c=='/'){
			return 2;}
		}
		void post(){
			char *ptr;
			ptr=in;
			int index=0;
			while(*ptr!='\0'){
				if(!isoperator(*ptr)){
					po[index]=*ptr;
					index++;
				}
				else{
					while(!s.empty()&&(precedence(s.top()>=precedence(*ptr)))){
						po[index]=s.top();
						index++;
						s.pop();
					}
					s.push(*ptr);
				}
				ptr++;
			}
			while(!s.empty()){
		po[index]=s.top();
		index++;
		s.pop();	
			}
			po[index]='\0';
		}
		void display(){
			for(int i=0;i<10;i++){
				cout<<po[i];
			}
		}
};
int main(){
	postfix p;
	p.read();
	p.post();
	p.display();
}
