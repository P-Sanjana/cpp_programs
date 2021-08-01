#include<stdio.h>
#include<omp.h>
int sum=0;
int main(){
	float t1=omp_get_wtick();
	#pragma omp parallel
	{
		int i;
		for(i=0;i<1000000;i++)
		sum+=i;
		int j;
	   for(j=0;j<1000000;j++);
	}
	float t2=omp_get_wtick();
	float t3=t2-t1;
	printf("%.2f",t3);
	return 0;
}
