#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<omp.h>
#define N 100
float a[N][N],b[N][N],c[N][N];
int main(){
	float t1;
	clock_t c_1,c_2;
	int i,j,k;
	srand(time(NULL));
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			a[i][j]=(rand()%10);
			b[i][j]=(rand()%10);
		}
	}
	printf("max number of threads : %i\n",omp_get_max_threads());
	#pragma omp parallel
	printf("number of threads : %i\n",omp_get_num_threads());
	c_1=time(NULL);
	#pragma omp parallel for private(k,j)
	#pragma omp set_num_threads(8)
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			c[i][j]=0;
			for(k=0;k<N;k++)
			c[i][j]+=a[i][k]*b[k][j];
		}
	}
	c_2=time(NULL);
	t1=(float)(c_2-c_1);
	printf("Execution time : %f",t1);
	return 0;
}
