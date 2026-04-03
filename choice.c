#include<stdio.h>
main()
{
	char ch;
	int choice;
	for(;;)
	{
		printf("\n1.Uppercase or Lowercase");
		printf("\n2.ASCII value");
		printf("\n3.Next and Pervious characters");
		printf("\n4.Exit");
		printf("\nEnter your choice :");
		scanf("%d",&choice);
		switch(choice)
		{
			printf("%d",choice);
			case 1 : printf("\nEnter any character :");
				 scanf("%s",&ch);
				 if(isupper(ch))
				 	printf("Character is of Uppercase\n",ch);		
				 else
					printf("Character is of Lowercase\n",ch);
				 break;

			case 2 : printf("\nEnter any character :");
				 scanf("%s",&ch);        			 
        			 printf("The ASCII value of a character is = %d\n",ch);
				 break;

			case 3 : printf("\nEnter a character :");
        			 scanf("%s",&ch);
        			 printf("Next Character = %c\n",ch+1);
        			 printf("Previous Character = %c\n",ch-1);
      				 break;

			case 4 : exit(0);
		}
	}
}
