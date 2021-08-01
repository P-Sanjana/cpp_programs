#include<stdio.h>
void main(){
int p[10],p1[10],bt[10],ct[10],tat[10],wt[10],i,j,t,t1,n,t2,p2[10],bt1[10],ct1[10],tat1[10],wt1[10],p3[10];
	printf("Enter no. of processes\n");
	scanf("%d",&n);
	printf("Enter burst times\n");
	for(i=0;i<n;i++){
		scanf("%d",&bt[i]);
		p[i]=i;
		bt1[i]=bt[i];
		p2[i]=p[i];
	}
	printf("Enter priority\n");
	for(i=0;i<n;i++)
		scanf("%d",&p1[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(p1[i]>p1[j]){
				t=p1[i];
				p1[i]=p1[j];
				p1[j]=t;
				t2=bt[i];
				bt[i]=bt[j];
				bt[j]=t2;
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
		tat[i]=ct[i];
		wt[i]=tat[i]-bt[i];
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(p[i]==p2[j]){
				bt1[j]=bt[i];
				ct1[j]=ct[i];
				tat1[j]=tat[i];
				wt1[j]=wt[i];
				p3[j]=p1[i];
			}
		}
	}
		printf("process\tpriority\tburst time\tcompletion time\tturn around time\twaiting time\n");
	for(i=0;i<n;i++)
	printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p2[i]+1,p3[i],bt1[i],ct1[i],tat1[i],wt1[i]);
}
