#include<stdio.h>
#include<stdbool.h>
void main(){
	int at[10],bt[10],ct[10],tat[10],wt[10],i,j,n,t,t1,tq,t2,rt[10],p[10],t3;;
	printf("no. of processes");
	scanf("%d",&n);
	printf("arrival times");
	for(i=0;i<n;i++){

	scanf("%d",&at[i]);
p[i]=i;}
	printf("burst times");
	for(i=0;i<n;i++)
	scanf("%d",&bt[i]);

	printf("time quanta");
	scanf("%d",&tq);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(at[i]>at[j]){
				t=at[i];
				at[i]=at[j];
				at[j]=t;
				t1=bt[i];
				bt[i]=bt[j];
				bt[j]=t1;
				t3=p[i];
				p[i]=p[j];
				p[j]=t3;
			}
		}
	}
	for(i=0;i<n;i++){
		rt[i]=bt[i];
	}
	t2=0;
		while(1){
			bool flag=true;
			for(i=0;i<n;i++){
				if(rt[i]>0){
				flag=false;
				if(rt[i]>tq){
				t2+=tq;
				rt[i]=rt[i]-tq;	
				}
				else{
					t2+=rt[i];
					rt[i]=0;
					wt[i]=t2-bt[i];
				}	
				}
}
if(flag==true)
break;
}
	for(i=0;i<n;i++){
		tat[i]=wt[i]+bt[i];
		ct[i]=tat[i]+at[i];
	}
	printf("process\t\tcompletion time\tturn around time\twaiting time\n");
	for(i=0;i<n;i++)
	printf("%d\t\t%d\t\t%d\t\t%d\n",p[i]+1,ct[i],tat[i],wt[i]);
}
