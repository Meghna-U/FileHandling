#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr1,*fptr2;
	char p,srev[100];
	int i=0,j,n=0;
	fptr1=fopen("file1.txt","r");
	if(!fptr1)
	{
		printf("Cannot open the file");
	}
	printf("Content in file:");
	p=getc(fptr1);
	while(p!=EOF)
	{
		n++;
		putchar(p);
		srev[i]=p;
		i++;
		p=getc(fptr1);
	}
	printf("\nContent in reverse order:");
	for(j=n-1;j>=0;j--)
	{
		p=srev[j];
		printf("%c",p);
	}
	fclose(fptr1);
	fptr1=fopen("file1.txt","r");
	if(fptr1==NULL)
	{
		printf("Cannot open the file");
	}
	fptr2=fopen("file2.txt","w");
	if(fptr2==NULL)
	{
		printf("Cannot open the file");
	}
	p=fgetc(fptr1);
	while(p!=EOF)
	{
		fputc(p,fptr2);
		p=fgetc(fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
}
