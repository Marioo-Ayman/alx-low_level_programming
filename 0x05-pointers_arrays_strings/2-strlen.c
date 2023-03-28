#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
void int_strlen(char*s)
{
	int lon = 0;

	while (*s != '0')
	{
		lon++;
		s++;
	}

	return (lon);
}
