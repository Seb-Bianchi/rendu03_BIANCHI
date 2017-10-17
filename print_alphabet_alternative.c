
#include <stdio.h>

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
	}
	while(cpt<91);
	printf("\n");
}
