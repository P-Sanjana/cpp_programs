#include<stdio.h>
void main(){
	int *p;
	p=1;
	printf("%d\n",&p);
	printf("%d\n",p);
	int q=&p;
	printf("%u\n",&q);
	int a=&q;
	printf("%u",&a);
	/*int i=1;
	for(;i<=32768;i++)
	printf("%d",i);*/
	struct xyz{
		int j;
	};
	struct xyz *b;
	struct xyz c;
	b=&c;
	b->j=10;
	printf("%d",(*b).j);
}
