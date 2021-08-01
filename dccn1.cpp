#include<stdio.h>
bool fun(int a[],int i){
	int j;
	for(j=i;j<i+5;j++){
		if(a[j]==0)
		return false;
	}
	return true;
}
int main()
{
	int a[20],b[20],i=0,j,n,c,k;
	printf("Enter the no of bits");
	scanf("%d",&n);
	printf("Enter the stream");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	while(i<n)
	{
		if(a[i]==1)
		{
			if(fun(a,i)){
			for(j=0;j<5;j++)
			b[j]=a[i+j];
			j++;
			b[j]=0;
			k=j;}
			else{
			b[k]=a[i];
			k++;	
			}
		}
		else{
		b[k]=a[i];
		k++;}
		i++;
		
	}
	printf("After stuffing");
	for(i=0;i<k;i++)
	printf("%d ",b[i]);
return 0;	
}
