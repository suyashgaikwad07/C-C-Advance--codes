#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp1, *fp2, *fp3;
	char c;
	char fname1[40], fname2[40], fname3[40];
	int ch;

	printf("Enter name of first file : ");
	gets(fname1);
	printf("Enter name of second file: ");
	gets(fname2);
	printf("Enter name of third file : ");
	gets(fname3);

	for(;;)
	{
		printf("\n\n** FILE OPERATION **\n\n");
		printf("1. Concatenate two files into third\n");
		printf("2. Merge the files\n");
		printf("3. Exit\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch);

		switch(ch)
		{
			case 1:
				fp1 = fopen(fname1, "r");
				fp2 = fopen(fname2, "r");
				fp3 = fopen(fname3, "a");
				if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
				{
					puts("Could not open file");
					exit(0);
				}
				while ((c = fgetc(fp1)) != EOF)
					fputc(c, fp3);
				while ((c = fgetc(fp2)) != EOF)
					fputc(c, fp3);
				printf("Concatenated file1 and file2 into file3");
				fclose(fp1); fclose(fp2); fclose(fp3);
				break;
			case 2:
				fp1 = fopen(fname1, "r");
				fp2 = fopen(fname2, "a");
				if (fp1 == NULL || fp2 == NULL)
				{
					puts("Could not open file");
					exit(0);
				}
				while ((c = fgetc(fp1)) != EOF)
					fputc(c, fp2);
				printf("Merged file1 into file2");
				fclose(fp1); fclose(fp2);
				break;
			case 3:
				exit(0);
		}
	}
	return 0;
}