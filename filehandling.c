#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fptr1,*fptr2;
	char c,srev[100];
	int i=0,j,n=0;
	fptr1=fopen("file1.txt","r");
	if(!fptr1)
	{
		printf("Cannot open the file");
	}
	printf("Content in file:");
	c=getc(fptr1);
	while(c!=EOF)
	{
		n++;
		putchar(c);
		srev[i]=c;
		i++;
		c=getc(fptr1);
	}
	printf("\nContent in reverse order:");
	for(j=n-1;j>=0;j--)
	{
		c=srev[j];
		printf("%c",c);
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
	c=fgetc(fptr1);
	while(c!=EOF)
	{
		fputc(c,fptr2);
		c=fgetc(fptr1);
	}
	fclose(fptr1);
	fclose(fptr2);
}
