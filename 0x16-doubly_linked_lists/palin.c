#include <stdlib.h>
#include <stdio.h>

/**
 * palin - checks in an unsigned int interger is a palindrome
 * @n: takes an unsigned int
 * Return: the int if it's a palindrome, else return 1
 */
unsigned int palin(unsigned int n)
{
	unsigned int cpy_n = n, cpy_n2 = n;
	int i = 0, k = 0, j = 0, *arr;

	while (cpy_n != 0)
	{
		cpy_n % 10;
		cpy_n /= 10;
		i++;
	}
	arr = malloc(sizeof(int) * i);
	if (arr == NULL)
		return (EXIT_FAILURE);
	while (cpy_n2 != 0)
	{
		arr[k] = cpy_n2 % 10;
		cpy_n2 /= 10; k++;
	} k--;
	while (k >= 0)
	{
		if (arr[k] != arr[j])
			return (1);
		k--; j++;
	}
	return (n);
}

/**
 * main - gets the highest palindrome value in a
 * product of two 3 digits numbers
 * Return: the highest value
 */

int main(void)
{
	unsigned int k, i = 100, j = 100, product = 0, winning = 0;
	unsigned int challenger = 0;

	while (i <= 999)
	{
		k = i;
		while (k <= 999)
		{
			product = palin(i * j);
			if (product != 1)
				if (product > challenger)
					winning = product;
			challenger = winning;
			k++; j++;
		}
		j = 0;
		i++;
	}
	printf("Highest value: %u\n", winning);
	return (winning);
}
