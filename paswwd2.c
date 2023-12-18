#include <stdio.h>
#include <stdlib.h>

int main ()
{
	unsigned char pass [4]= {'m', 'o', 'o','y'};
	unsigned char user_pass[4];
	int index ;
	int passflag = 0;
	int triall = 0;

	while ( triall < 3 )
	{	

		printf("Please Enter The Password ");
			for (index = 0; index < 4; index++)
			{
				scanf("%c", &user_pass[index]);
				fflush(stdin);
			

			}
			putchar('\n');

			for (index = 0; index < 4; index++)
			{
				if ( user_pass[index] != pass[index])
					passflag = 1 ;
				break;
			}

			if (1 == passflag)
			{
				triall++;
				passflag = 0;
				printf("Invalid Password \n");
				printf("Please Enter Your Password \n");
			}
			else 
			{
				printf("Welcome..\n");
				break;
			}
	}
	return (0);
}
