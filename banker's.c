#include<stdio.h>
#include<stdbool.h>
void main(){
	int n,m;
	printf("Enter no. of processes\n");
	scanf("%d",&n);
	printf("Enter no. of resources\n");
	scanf("%d",&m);
	int max[n][m],allocation[n][m],available[1][m],i,j,need[n][m],total[1][m],s[m],work[1][m],se[n],count1[10];
	bool finish[10],flag=false;
	int count=0;
	printf("Enter max\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&max[i][j]);
		}
	}
	printf("Enter allocation\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&allocation[i][j]);
			s[j]=0;
		}
		count1[i]=0;
	}
	printf("Enter total\n");
	for(i=0;i<m;i++)
	scanf("%d",&total[0][i]);
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			available[0][i]=0;
			need[j][i]=max[j][i]-allocation[j][i];
		}
		finish[i]=false;
	}
	for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		s[i]=s[i]+allocation[j][i];
}
available[0][i]=total[0][i]-s[i];
	}
		for(j=0;j<m;j++){
		work[0][j]=available[0][j];	}
		printf("Max\t\tAllocation\t\tNeed\n");
		for(i=0;i<n;i++){
			for(j=0;j<m;j++)
			printf("%3d",max[i][j]);
			printf("\t");
				for(j=0;j<m;j++)
			printf("%3d",allocation[i][j]);
			printf("\t\t");
				for(j=0;j<m;j++)
			printf("%3d",need[i][j]);
			printf("\n");
		}
		printf("\nAvailable");
		for(i=0;i<m;i++)
		printf("%3d",available[0][i]);
		printf("\n total");
		for(i=0;i<m;i++)
		printf("%3d",total[0][i]);
		int c=0;
	while(count<n){
		c++;
		flag=false;
		for(i=0;i<n;i++){
			if(finish[i]==false){
				for(j=0;j<m;j++){
			if(need[i][j]>work[0][j])
			break;
			else
			{
				for(j=0;j<m;j++){
			work[0][j]=work[0][j]+allocation[i][j];
			max[i][j]=0;allocation[i][j]=0;need[i][j]=0;
		}
			finish[i]=true;
			se[count++]=i;
			count1[c]++;
			flag=true;
		}
	
	}
}		
}
if(flag==false||(c>1&&count1[c-1]==count1[c])){
	printf("unsafe");
	break;
}	
}
printf("\nSafe");
for(i=0;i<n;i++)
printf("%d ",se[i]);
}
