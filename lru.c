#include<stdio.h>
int findc(int count1[],int n){
	int j,max=count1[0],l;
	for(j=1;j<n;j++){
				if(count1[j]>max){
				max=count1[j];
				l=j;
}}
return l;
}
void main(){
	int p[30],i,j,n,m,l,k,count=0,c=0,pf=0,p1[30],flag;
	printf("Enter no. of pages\n");
	scanf("%d",&m);
	printf("Enter page references\n");
	for(i=0;i<m;i++)
	scanf("%d",&p[i]);
	printf("Enter no. of frames\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	p1[i]=-1;
	for(i=0;i<m;i++){
		printf("%d     ",p[i]);
		if(count<n){
			flag=0;
			for(j=0;j<n;j++){
				if(p1[j]==p[i]){
				flag=1;break;}
			}
			if(flag==0){
			p1[count]=p[i];
		count++;
		pf++;
		for(j=0;j<n;j++)
		printf("%d ",p1[j]);
		}}
			else{
				for(j=0;j<n;j++){
				if(p1[j]==p[i]){
				flag=0;break;}
				else
				flag=1;
			}
			if(flag==1){
				int count1[n];
				for(j=0;j<n;j++)
				count1[j]=0;
			for(j=0;j<n;j++){
				for(k=i-1;k>=0;k--){
					count1[j]++;
					if(p1[j]==p[k]){
					break;
				}}}
			p1[findc(count1,n)]=p[i];
			pf++;
			for(j=0;j<n;j++)
			printf("%d ",p1[j]);
			}
			}
			printf("\n--------------");
			printf("\n");
			}
		printf("Page faults : %d",pf);
	}
