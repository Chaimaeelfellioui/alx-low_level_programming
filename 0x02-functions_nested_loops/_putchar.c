#include "main.h"
#include <unistd.h>
/**
* _putchar -writes the character c to stdoat
* RC: the character to print
*
* Return: on success 1
*/
int _putchar(charc)
{
	return (write(1, &c, 1));
}
