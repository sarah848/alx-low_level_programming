/* Prints alphabet in lowercase followed by a new line */

#include "main.h"

void print_alphabet(void)

{
	char alpha;

	alpha = 'a';

	while (alpha <= 'z')

	{

		_putchar(alpha);

		alpha++;
	}

	_putchar('\n');

}
