// Worksheet 2.5

/* 
 * Task 1.1 - Practice
 * Using for loop to print all prime numbers from 1 to 100.
 * recall that a prime number is a natural number greater than 1
 * and completely only divisible by 1 and itself.
 */

#include <stdio.h>
#include <math.h>

int main(void) {
    for(int i = 0; i < 100; i++)
	{
		int prime = 1;
		for(int j = 0; j < sqrt(i); j++)
		{
			if (i % j == 0)
			{
				prime = 0;
			} 
		}
		if (prime = 1)
		{
			printf("%i", prime);
		}
	}
	return 0;
}