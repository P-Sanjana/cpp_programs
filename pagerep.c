#include<stdio.h>
void main(){
	int arr[30],i,j,c=0,n,m,flag,arr1[10],fault=0;
		printf("Enter no. of pages\n");
	scanf("%d",&m);
	printf("Enter the reference string\n");
	for(i=0;i<m;i++)
		scanf("%d",&arr[i]);
		printf("Enter no. of frames\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	arr1[i]=-1;
	for(i=0;i<m;i++){
		printf("%d      ",arr[i]);
			for(j=0;j<n;j++){
				flag=0;
				if(arr1[j]==arr[i]){
					flag=1;
				break;
			}}
			if(flag==0){
				arr1[c]=arr[i];
				c=(c+1)%n;
				fault++;
			for(j=0;j<n;j++)
			printf("%d ",arr1[j]);
			}
			printf("\n----------------");
				printf("\n");
		}
	printf("Page faults : %d",fault);
}
