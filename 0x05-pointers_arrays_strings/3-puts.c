#include "main.h"

/**
 * puts - prints a stdout
 * @str: pointer to the string to print
 * Return
 */
void puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
        {
		_putchar(str[i]);
	}
        _putchar('\n');
}
