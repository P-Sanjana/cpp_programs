#include<stdio.h>
#include<omp.h>
main(){
	int n,i,j=0,k=1;
	scanf("%d",&n);
	/*for(i=0;i<n;i++){
		for(j=0;j<=i;j++){
			#pragma omp parallel
			printf("%d ",k);
			k++;
		}
		printf("\n");
	}*/
	i=n;
	while(i>0){
		j+=i%10;
		i=i/10;
	}
	#pragma omp parallel
	printf("%d ",j);
}
