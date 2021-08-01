#include<stdio.h>
main(){
	int n,i=0;
	scanf("%d",&n);
	int a[n],b[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	//#pragma omp parallel
	for(i=n-1;i>=0;i--)
	{
	b[i-n-1]=a[i];
	printf("%d ",b[i-n-1]);
	printf("\n");
    }
 for(i=0;i<n;i++)
 printf("%d ",b[i]);
	printf("%d k",b[n/2]);
}
