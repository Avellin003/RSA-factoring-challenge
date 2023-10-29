#include "factor.h"
/**
 * fact - function that factorises the numbers
 * @holder: pointer to the numbers
 * Return: 0 if success
 */
int fact(char *holder)
{
	u_int32_t number;
	u_int32_t a;

	number = atoi(holder);

	for (a = 2; a < number; a++) /*starts form 2 as it's the first
	Prime number*/
	{
		if (number % a == 0) /*checks the modulus*/
		{
			printf("%d=%d*%d\n", number, number/a, a);
			break;
		}/*included with break so that it could compute one a time*/
	}
	return(0);
}
