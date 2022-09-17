/*Program should print _putchar , followed by a new line. */

#include <unistd.h>


int _putchar(char c)

{

	return (write(1, &c, 1));

}

