#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fptr1,*fptr2;
	char c,filename[100];
	scanf("%s",filename);
	fptr1=fopen(filename,"r");
	if(fptr1==NULL)
	{
		printf("file not found");
		exit(0);
	}
	scanf("%s",filename);
	fptr2=fopen(filename,"w");
		if(fptr2==NULL)
	{
		printf("file not found");
		exit(0);
	}
	c=fgetc(fptr1);
	while(c!=EOF)
	{
		fputc(c,fptr2);
		c=fgetc(fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
	return 0;
	
}
