#include<stdio.h>
void main(){
	int n,i,j,k,m,count=0,flag,pf=0,min;
	printf("Enter no. of pages\n");
	scanf("%d",&m);
	int p[n],p1[10],c[n];
	printf("Enter the reference string\n");
	for(i=0;i<m;i++)
	scanf("%d",&p[i]);
	printf("Enter no. of frames\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	p1[i]=-1;
	for(i=0;i<m;i++)
	c[i]=0;
	for(i=0;i<m;i++){
		printf("%d   ",p1[i]);
		if(count<n){
			flag=0;
			for(j=0;j<n;j++){
				if(p1[j]==p[i]){
				flag=1;c[p[i]]++;
				min=c[p[i]];break;}
			}
			if(flag==0){
			p1[count]=p[i];
		count++;c[p[i]]++;
		pf++;min=c[p[i]];
		for(j=0;j<n;j++)
		printf("%d ",p1[j]);
		}
	}
	else{
		for(j=0;j<n;j++){
				if(p1[j]==p[i]){
				flag=0;c[p[i]]++;
				min=c[p[i]];break;}
				else
				flag=1;
			}
			if(flag==1){
				for(j=0;j<n;j++){
					if(c[p[j]]<min){
					min=c[p[j]];
					k=j;}
				}
				p1[k]=p[i];
				pf++;
				c[p[i]]++;
				min=c[p[i]];
				for(j=0;j<n;j++)
		printf("%d ",p1[j]);
		
	}
}
printf("\n");
}
printf("%d",pf);
}
