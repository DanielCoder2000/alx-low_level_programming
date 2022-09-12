/*
 *Author: Letsatsi Mothemane
 *
 *Filename: 9-print_comb.c 2022/09/12
 */
#include<stdio.h>
/**
 * main - Prints "numbers of single from 1 to
 * 9," then prints a new line
 *
 * Return: Always 0.
 */

int main(void)
{
int num;

for (num = 0; num <= 9; num++)
{
putchar((num % 10) + '0');
if (num == 9)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');

return (0);
}
