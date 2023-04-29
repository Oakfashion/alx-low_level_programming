#include "main.h"
#include <stdio.h>

/**
 * print_triangle - prints a triangle using the '#' character
 * @size: the size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
		return;
	}

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - i - 1; j++)
		{
			putchar(' ');
		}
		for (int k = 0; k <= i; k++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
