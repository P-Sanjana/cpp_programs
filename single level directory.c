#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct{
	char dname[20],fname[20][20];
	int fcnt;
}dir;
void main(){
	int i,ch;
	char f[30];
	dir.fcnt=0;
	printf("\nEnter the name of the directory\n");
	scanf("%s",dir.dname);
	while(1){
		printf("1.Create file\t2.Delete file\t3.Search file\t4.Display files\t5.exit\nEnter your choice\n");
		scanf("%d",&ch);
		switch(ch){
			case 1:printf("Enter the name of the file\n");
			scanf("%s",dir.fname[dir.fcnt]);
			dir.fcnt++;
			break;
			case 2:printf("Enter the name of the file\n");
			scanf("%s",f);
			for(i=0;i<dir.fcnt;i++){
				if(strcmp(f,dir.fname[i])==0){
					printf("File %s is deleted\n",f);
					strcpy(dir.fname[i],dir.fname[dir.fcnt-1]);
					break;
				}
			}
			if(i==dir.fcnt)
			printf("File %s not found\n",f);
			else
			dir.fcnt--;
			break;
			case 3:printf("Enter the name of the file\n");
			scanf("%s",f);
			for(i=0;i<dir.fcnt;i++){
				if(strcmp(f,dir.fname[i])==0){
					printf("File %s is found\n",f);
					break;
				}
			}
			if(i==dir.fcnt)
			printf("File %s not found\n",f);
			break;
			case 4:if(dir.fcnt==0)
			printf("Directory empty\n");
			else{
				printf("The files are\n");
				for(i=0;i<dir.fcnt;i++)
					printf("%s\t",dir.fname[i]);
			}
			break;
			default:exit(0);
			
		}
	}
}
