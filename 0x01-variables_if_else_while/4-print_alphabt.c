/*
 *Author: Letsatsi Mothemane
 *
 *filename: 4-print_alphabt.c 2022/09/12
 */
#include<stdio.h>
/**
 * main - Prints "all letters in lower - case except
 * for e and q," then prints a new line
 *
 * Return: Always 0.
 */

int main(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'e' && letter != 'q')
{
	putchar(letter);
}
}
putchar('\n');

return (0);
}
