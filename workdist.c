#include<stdio.h>
#include<omp.h>
#define ARR_SIZE 100000000
int a[ARR_SIZE];
int main(){
	int i,id,numt,sum=0;
	double t1,t2;
	for(i=0;i<ARR_SIZE;i++)
	a[i]=1;
	t1=omp_get_wtime();
	#pragma omp parallel default(shared) private(i,id)
	{
		//int psum=0;
	//	#pragma omp for
	id=omp_get_num_threads();
	numt=omp_get_thread_num();
		for(i=0;i<=ARR_SIZE;i++)
		sum+=a[i];
	}
	//	#pragma omp critical
		//sum+=psum;
		t2=omp_get_wtime();
		printf("Sum of the array elements = %d . Time = %g\n",sum,t2-t1);
	//}
	return 0;
}
/*int x,sum;
#pragma omp threadprivate(x)
main(){
	#pragma omp set_num_threads(3)
	#pragma omp parallel
	#pragma omp critical
	{
	x=1;
	sum+=x;
}
x=2;
	#pragma omp parallel
	#pragma omp critical
	sum+=x;
	printf("%d",sum);
}*/
