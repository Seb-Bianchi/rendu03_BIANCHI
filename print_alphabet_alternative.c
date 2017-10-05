
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void print_alphabet_alternating(void)
{
	int cpt = 65;
	do
	{
		printf("%c", cpt);
		cpt = cpt+33;
		printf("%c",cpt);
		cpt = cpt-31;
	}while(cpt<89);
	printf("Yz \n");
}
