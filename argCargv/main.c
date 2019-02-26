
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char** argv)
{
	int i=0;
	if(argc<2)
	{
		fprintf(stderr,"\tERROR %s: \n"
			"\tUSAGE: expected 1 or more parameters\n\n",argv[0]);
		exit(EXIT_FAILURE);
	}
	for(i=1;i<argc;i++)
		printf("-argv[%d]: %s\n", i, argv[i]);
	//puts("\n");
	
	for(i=1;i<argc;i++)
	{
		if(strlen(argv[i])>2)
			printf("-argv[%d][2]: %c\n", i, argv[i][2]);
	}
	//puts("\n");
	return 0;
}