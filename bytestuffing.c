#include<stdio.h>
void main(){
	char c1,c2;
	scanf("%c",&c1);
	char a[10],b[10];
	int i,*p,j=0,count=0;
	scanf("%s",a);
	p=(char*)malloc(10*sizeof(char));
	for(i=0;i<10;i++){
		if(a[i]==c1){
				b[j++]='e';
				b[j++]='s';
				b[j++]='c';
				b[j++]=c1;
			}
		else if(a[i]=='e' && a[i+1]=='s' && a[i+2]=='c'){
			    b[j++]='e';
				b[j++]='s';
				b[j++]='c';
				b[j++]=a[i];	
			}
		else{
			b[j]=a[i];
			j++;
			}
			}
			char *p1;
			p1=b;
			while(*p1!='\0'){
				count++;
				p1++;
			}
  for(i=0;i<count;i++){
  	if(b[i]=='e' && b[i+1]=='s' && b[i+2]=='c'){
  		i=i+3;
	  }
	  printf("%c",b[i]);
  }
}
