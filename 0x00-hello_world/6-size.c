#include <stdio.h>

/**
 * main - print the string in the put function
 *
 * char: This is a character
 * int: This is an integer
 * long: this is a long int
 * long long: This is quite long
 * float: This is floating water
 * Return: It should return zero succesfully
 */

int main(void)
{
char c;
int i;
long li;
long long lli;
float f;
printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
printf("Size of a float: %zu byte(s)\n", sizeof(float));
return (0);
}
