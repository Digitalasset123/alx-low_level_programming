#include "main.h"

/**
 * check_divisor - Helper function to check if a number has a divisor
 * @n: The number to check for divisors
 * @divisor: The current divisor being checked
 *
 * Return: 1 if the number has no divisors, 0 otherwise
 */
int check_divisor(int n, int divisor)
{
	if (divisor >= n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (check_divisor(n, divisor + 1));
}

/**
 * is_prime_number - Checks if a number is prime
 * @n: The number to check
 *
 * Return: 1 if the number is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (check_divisor(n, 2));
}
