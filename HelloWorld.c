#include<stdio.h>
#include<omp.h>
void main(){
	int tid,tnum;
	#pragma omp parallel private(tid) shared(tnum)	
	
	tid=omp_get_thread_num();
	if(tid==0){
	tnum=omp_get_num_threads();
	//for(j=0;j<10000000;j++);
	printf("ThreadId from thread %d of %d\n",tid,tnum);
	}
	
}
