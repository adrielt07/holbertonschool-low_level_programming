#include<stdio.h>
/**
 * main - prints sizes of built-in types
 * Return: 0 if successful
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %hu byte(s)\n", (unsigned short)sizeof(c));
	printf("Size of an int: %hu byes(s)\n", (unsigned short)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(li));
	printf("Size of a long long int: %llu byte(s)\n",
	       (unsigned long long int)sizeof(lli));
	printf("Size of a float: %ld byte(s)\n", (unsigned long int)sizeof(f));
	return (0);
}
