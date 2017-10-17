
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


void print_alphabet_lowercase(void)
{
char lettre='a';
	while(lettre != 'z')
	{
		printf("%c",lettre);
		lettre++;
	}
	printf("\n");
}
