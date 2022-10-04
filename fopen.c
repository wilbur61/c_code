#include <stdio.h>
#include <stdlib.h>

void main()
{
	
	FILE *fp;
	char fname[20];
    char response[3];
    
	printf("Enter the file name with extension (like demo.txt) : ");
	gets(fname);
	fp=fopen("demo", "rb");
	if(fp==NULL)
	{
		printf("Error in opening the file..!!\n");
		printf("Press any key to exit..\n");
		gets(response);
		exit(1);
	}
	if(fclose(fp))
	{
		printf("Error in closing the file..!!\n");
	}
	//getch();
}