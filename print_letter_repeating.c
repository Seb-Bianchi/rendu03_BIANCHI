#include <stdio.h>
#include <stdlib.h>

void print_letter_repeating(char **argv)
{
	int nombre = 0;
	int i=0;
	int x = argv;
	
	if(x>96 & x<123)
	{
		nombre = x - 96;
		for(i = 0;i<nombre;i++)
		{
			printf("%c",x);
		}	
		printf("\n");
	}
	else if(x>64 & x<91)
	{
		nombre = x - 64;
                for(i = 0;i<nombre;i++)
                {
                        printf("%c",x);
                }
                printf("\n");
	}
}
