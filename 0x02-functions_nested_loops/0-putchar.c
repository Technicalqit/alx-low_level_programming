#include "main.h"
/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
	char put[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(put[i]);
	}
	_putchar('\n');
	return (0);
}
