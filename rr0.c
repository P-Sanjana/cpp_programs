#include<stdio.h>
#include<stdbool.h>
void main(){
	int bt[10],ct[10],tat[10],wt[10],i,j,n,tq,m,max,t1=0,rt[10],p[10];
	printf("Enter no. of processes\n");
	scanf("%d",&n);
	printf("Enter burst times\n");
	for(i=0;i<n;i++){
	scanf("%d",&bt[i]);
	rt[i]=bt[i];
	p[i]=i;
}
	printf("Enter time quanta\n");
	scanf("%d",&tq);
	
	t1=0;
		while(1){
			bool flag=true;
			for(i=0;i<n;i++){
				if(rt[i]>0){
				flag=false;
				if(rt[i]>tq){
				t1+=tq;
				rt[i]=rt[i]-tq;	
				}
				else{
					t1+=rt[i];
					rt[i]=0;
					wt[i]=t1-bt[i];
				}	
				}
	
}
if(flag==true)
break;
}
		printf("process\t\tburst time\tcompletion time\tturn around time\twaiting time\n");
	for(i=0;i<n;i++)
	printf("p%d\t\t%d\t\t%d\t\t%d\t\t\t%d\n",p[i]+1,bt[i],wt[i]+bt[i],wt[i]+bt[i],wt[i]);
		
}
