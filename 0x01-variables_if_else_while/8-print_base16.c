/*
 *Author: Letsatsi Mothemane
 *
 *Filename: 8-print_base16.c 2022/09/12
 */
#include<stdio.h>
/**
 * main - Prints "all the numbers of
 * base 16," then prints a new line
 *
 * Return: Always 0.
 */
int main(void)
{
int num;
char b;

for (num = 0; num < 10; num++)
{
putchar((num % 10) + '0');
}
for (b = 'a'; b <= 'f'; b++)
{
putchar(b);
}
putchar('\n');

return (0);
}
