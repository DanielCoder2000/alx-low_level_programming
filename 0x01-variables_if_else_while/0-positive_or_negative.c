/*
 *Author: Letsatsi Mothemane
 *
 *Project: 0-positive_or_negative.c 2022/09/12
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 * return: Always 0
 *main function: prints the random number that is
 *positive or negative
 */

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{
printf("%d is positive", n);
}
else if (n == 0)
{
printf("%d is equal to 0", n);
}
else
{
printf("%d is negative", n);
}

return (0);
}
