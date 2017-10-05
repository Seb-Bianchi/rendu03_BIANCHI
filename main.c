#include <unistd.h>
#include <stdio.h>

void print_alphabet_lowercase(void);
void print_alphabet_alternating(void);
void print_letter_repeating(char lettre);
int main (int argc, char **argv)
{
	
        print_alphabet_lowercase();
	print_alphabet_alternating();
	print_letter_repeating(*argv[1]);
	return(0);
}
