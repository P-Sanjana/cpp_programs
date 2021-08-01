#include<stdio.h>
void main(){
	int p[10],at[10],bt[10],ct[10],tat[10],wt[10],i,j,k,l,m,m1,t,t2,t1,t3,n,x,count=0;
	printf("no.of processes");
	scanf("%d",&n);
	printf("arrival times");
	for(i=0;i<n;i++){
		scanf("%d",&at[i]);
		p[i]=i;
	}
	printf("burst times");
	for(i=0;i<n;i++)
		scanf("%d",&bt[i]);
		for(i=0;i<n;i++){
			if(at[i]==0){
				count++;
			}
		}
		if(count>0){
			for(i=0;i<n;i++){
				for(j=0;j<n;j++){
					if(bt[i]>bt[j]){
						t=bt[i];
						bt[i]=bt[j];
						bt[j]=t;
						t1=at[i];
						at[i]=at[j];
						at[j]=t1;
						t2=p[i];
						p[i]=p[j];
						p[j]=t2;
				 }
				}
			}
			for(k=0;k<n;k++){
				if(at[k]==0){
					m=k;
					m1=ct[k]=bt[k];
					tat[k]=ct[k];
					wt[k]=0;
				}
			}
			for(l=0;l<n;l++){
				if(at[l]<m1){
					for(x=0;x<n;x++){
						if(at[i]<m1 && l!=m){
							ct[l]=m1+bt[l];
							m1=ct[l];
						}
					}
				}
			}
		}
		else{
			for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(bt[i]>bt[j]){
				t2=bt[i];
				bt[i]=bt[j];
				bt[j]=t2;
				t=at[i];
				at[i]=at[j];
				at[j]=t;
				t1=p[i];
				p[i]=p[j];
				p[j]=t1;
			}
		else if(bt[i]=bt[j]){
				if(at[i]>at[j]){
				t=at[i];
				at[i]=at[j];
				at[j]=t;
				t1=p[i];
				p[i]=p[j];
				p[j]=t1;	
				}
				else if(at[i]==at[j]){
					if(p[i]>p[j]){
					t3=p[i];
				p[i]=p[j];
				p[j]=t1;	
					}
				}
			}
		}
	}
	ct[0]=bt[0];
	tat[0]=ct[0];
	for(i=1;i<n;i++){
		ct[i]=ct[i-1]+bt[i];
	}
	for(i=1;i<n;i++){
		tat[i]=ct[i]-at[i];
		wt[i]=tat[i]-bt[i];
	}}
	printf("process\tarrival time\tburst time\tcompletion time\tturn around time\twaiting time\n");
	for(i=0;i<n;i++)
	printf("p%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",p[i]+1,at[i],bt[i],ct[i],tat[i],wt[i]);
		
}
