/*
 *Author: Letsatsi Mothemane
 *
 *Project: 0-positive_or_negative.c 2022/09/12
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints "randon positive or negative numbers
 * or 0," followed by a new line.
 *
 * Return: Always 0
 */

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive\n", n);
}
else if (n == 0)
{
printf("%d is zero\n", n);
}
else
{
printf("%d is negative\n", n);
}

return (0);
}
