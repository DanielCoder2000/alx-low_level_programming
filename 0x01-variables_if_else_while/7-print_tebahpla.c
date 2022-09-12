/*
 *Author: Letsatsi Mothemane
 *
 *filename: 7-print_tebahpla.c 2022/09/12
 */
#include <stdio.h>
/**
 * main - Prints "the letters of the alphabet
 * in lowercase using for loop"
 *
 * Return: Always 0.
 */

int main(void)
{
char letter;

for (letter = 'z'; letter >= 'a'; letter--)
{
putchar(letter);
}
putchar('\n');

return (0);
}
