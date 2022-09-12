/*
 * filename: 0-positive_or_negative.c
 *author: Letsatsi Mothemane
 *
 */
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*
 *declaration: main method holds the code
 *main method prints the random number
 *either positive, negative or equal to 0
 *return: always returns 0;
 */

int main(void)
{

int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
if (n>0) {
printf("%d is positive",n);
}
else if(n==0){
printf("%d is equal to 0",n);
}
else {
printf("%d is negative",n);

return 0;
}
}
