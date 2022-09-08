/*
 *Filename: 6-size.c
 *Author: Letsatsi Mothemane 2022/09/08
 */

#include <stdio.h>

/*
 *
 *main- "prints the size of various bytes depending on 
 *the computer its printed from"
 *
 *return: Always 0.
 */

int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
