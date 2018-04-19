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

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %lu byes(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int: %lu byte(s)\n",
	       (unsigned long)sizeof(li));
	printf("Size of a long long int: %lu byte(s)\n",
	       (unsigned long)sizeof(lli));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
