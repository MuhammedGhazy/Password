#include <stdio.h>
#include <stdlib.h>
//#include <windows.h>

int main ()
{
	unsigned char pass [5] = {'a', 'm', '2', '2', 'a'};
	unsigned char pass_2 [5];
	int i;
	int passflag = 0;
	int ii = 0;

	while (ii < 3)
	{
		printf("Enter Your Password : ");

		for (i = 0; i < 5; i++)
		{
			scanf ("%c", &pass_2[i]);
			fflush(stdin);

		}
		putchar('\n');

       /* printf("please wait...");
		for (i = 0; i < 15; i++)
		{
			printf(".");
			sleep(50);
		} */

		for (i = 0; i < 5; i++)
		{
			if (pass_2[i] != pass[i])
            {

				passflag = 1;
                break;
            }
		}
		if (1 == passflag)
		{
			ii++;
			passflag = 0;
			printf("Invalid Password\n");
			printf("Please Enter The Right Password\n");
		}
		else
		{
			printf("welcome\n");
            break;
		}

	}

		return (0);
}



