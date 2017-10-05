
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void print_alphabet_lowercase(void)
{
	for(int cpt = 'a' ; cpt < 'z'; cpt++)
	{
		printf("%c", cpt);
	}
	printf("z \n");
}
