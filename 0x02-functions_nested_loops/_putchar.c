#include "main.h"
#include <unistd.h>

/**
* main - _putchar- writes the character c to
* standard output
*
* Return: always 0 (success)
* on error, 1 is returned, and error is set
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
