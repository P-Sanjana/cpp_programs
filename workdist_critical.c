#include<stdio.h>
#include<omp.h>
#define ARR_SIZE 1000000
int a[ARR_SIZE];
void main(int *argc,int argv[]){
	int i,tid,numt,sum=0;
	double t1,t2;
	for(i=0;i<ARR_SIZE;i++)
	a[i]=1;
	t1=omp_get_wtime();
	#pragma omp parallel default(shared) private(i,tid)
	{
		int from,to,psum=0;
		tid=omp_get_thread_num;
		numt=omp_get_num_threads();
		from=(ARR_SIZE/numt)*tid;
		to=(ARR_SIZE/numt)*(tid+1)-1;
		if(tid==numt-1)
		to=ARR_SIZE-1;
	printf("hello from %d of %d, my range is from %d to %d\n",from,to,from,to);
		for(i=from;i<to;i++)
			psum+=a[i];
			#pragma omp critical
			sum+=psum;
		}
		t2=omp_get_wtime();
		printf("Sum of the array elements = %d .Time = %g",sum,t2-t1);
}
