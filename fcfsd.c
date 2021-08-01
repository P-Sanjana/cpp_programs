#include<stdio.h>
void main(){
	int at[10],bt[10],ct[10],tat[10],wt[10],i,n,t,p[10],j,t1;
	printf("no. of processes\n");
	scanf("%d",&n);
	printf("arrival times\n");
	for(i=0;i<n;i++){
	scanf("%d",&at[i]);
	p[i]=i;
}
	printf("burst times\n");
	for(i=0;i<n;i++)
	scanf("%d",&bt[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(at[i]>at[j]){
			t=at[i];
			at[i]=at[j];
			at[j]=t;
			t1=p[i];
			p[i]=p[j];
			p[j]=t1;	
			}
		}
	}
	ct[0]=bt[0];
	for(i=1;i<n;i++){
		ct[i]=ct[i-1]+bt[i];
	}
	for(i=0;i<n;i++){
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
	}
	printf("process\tarrival time\tburst time\tcompletion time\tturn around time\twaiting time\n");
	for(i=0;i<n;i++)
	printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i]+1,at[i],bt[i],ct[i],tat[i],wt[i]);
}
