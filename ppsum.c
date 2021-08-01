#include<stdio.h>
#include<omp.h>
main(){
	int n,i,j,t,s=0;
	scanf("%d",&n);
	int a[n];
	/*	#pragma omp parallel
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==1)
		s+=a[i];
	}

	printf("%d",s);*/
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}

	/*for(i=0;i<n;i=i+2){
		#pragma omp parallel
		printf("%d ",a[i]);
	}*/
	for(i=0;i<n;i++){
		for(j=i;j<n;j++){
			if(a[i]>a[j+1]){
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
	printf("%d ",a[n-2]);
}
