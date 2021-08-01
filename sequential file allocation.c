#include<stdio.h>
#include<string.h>
struct fileTable{
	char name[20];
	int sb,nob;
}ft[30];
void main(){
	int i,j,n;
	char s[30];
	printf("Enter no. of files\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Enter the name of the file %d\n",i+1);
		scanf("%s",ft[i].name);
		printf("Enter starting block of the file %d\n",i+1);
		scanf("%d",&ft[i].sb);
		printf("Enter the no. of blocks of the file %d\n",i+1);
		scanf("%d",&ft[i].nob);
	}
	printf("Enter the file to be searched\n");
	scanf("%s",s);
	for(i=0;i<n;i++)
		if(strcmp(s,ft[i].name)==0)
		break;
		if(i==n)
		printf("File %s is not found\n",s);
		else{
			printf("name\t\tstarting block\t\tno.of blocks\t\tno. of blocks occupied\n");
			printf("%s\t\t%d\t\t%d\t\t\t",ft[i].name,ft[i].sb,ft[i].nob);
			for(j=0;j<ft[i].nob;j++)
			printf("%d,",ft[i].sb+j);
		}
}
