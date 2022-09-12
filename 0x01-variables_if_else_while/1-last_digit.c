/*
 *Author: Letsatsi Mothemane
 *
 * File: 1-last_digit.c 2022/09/12
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints "random number using modulus
 * and is," followed by a new line
 *
 * Return: Always 0.
 *
 */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n %10 > 5)
{
printf("Last digit of %d is %d and is greater than 5", n, n % 10);
}
else if (n % 10 == 0)
{
printf("Last digit of %d is %d and is 0", n, n % 10);
}
else
{
printf("Last digit of %d is %d is less than 6 and not 0", n, n % 10);
}

return (0);
}
