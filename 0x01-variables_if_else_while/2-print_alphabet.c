/*
 *Author: Letsatsi Mothemane
 *
 *filename: 2-print_alphabet.c 2022/09/22
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

for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
