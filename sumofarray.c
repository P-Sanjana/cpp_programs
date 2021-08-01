#include<stdio.h>
#include<omp.h>
void main(){
	int n,i,sum=0;
	scanf("%d\n",&n);
	int a[n];
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);
}

for(i=0;i<n;i++){
	#pragma omp parallel
	{
	if(a[i]%2!=0)
		sum+=a[i];
	}}
	printf("sum:%d avg:%d\n",sum,sum/n);
}
