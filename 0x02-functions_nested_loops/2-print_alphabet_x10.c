/*function prints 10 times the alphabet, in lowercase, followed by a new line.*/

#include "main.h"

void print_alphabet_x10(void)
{

	char alpha;

	int counter;

	for (counter = 1; counter <= 10; counter++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)

		{
																			_putchar(alpha);
																		}
		_putchar('\n');
	}
}
