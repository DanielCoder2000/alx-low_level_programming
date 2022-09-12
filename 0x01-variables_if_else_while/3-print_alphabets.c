/*
 *Author: Letsatsi Mothemane
 *
 *filename: 3-print_alphabets.c 2022/09/12
 */
#include <stdio.h>
/**
 * main - Prints "Letters from a to z in upper
 * -case the in lowercase," the prints a new line
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
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
putchar('\n');

return (0);
}
