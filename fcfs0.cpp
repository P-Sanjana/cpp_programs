#include<stdio.h>
void main(){
	int bt[10],ct[10],tat[10],wt[10],n,i;
	printf("no. of processes\n");
	scanf("%d",&n);
	printf("burst times\n");
	for(i=0;i<n;i++)
	scanf("%d",&bt[i]);
	ct[0]=bt[0];
	for(i=1;i<n;i++){
	ct[i]=ct[i-1]+bt[i];
}
for(i=0;i<n;i++){
	tat[i]=ct[i];
	wt[i]=tat[i]-bt[i];}
     printf("process\t\tburst time\tcompletion time\t\tturn around time\t\twaiting time\n");
     for(i=0;i<n;i++){
     	printf("p%d\t\t%d\t\t\t%d\t\t\t%d\t\t\t%d\t\t\t",i+1,bt[i],ct[i],tat[i],wt[i]);
     	printf("\n");
	 }
}
