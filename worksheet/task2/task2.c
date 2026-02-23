/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name:Kieran Long
 * ID: 201978275
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int main(void){
	long long decimal=0;
	char hex[9];
	int intBool;
	int tempHex;
	int currentPower;

	printf("Enter a hexadecimal:");
	fgets(hex, 9, stdin);
	hex[strcspn(hex, "\n")] = '\0';
	// if input contains invalid hex digit
	// printf("Error: Invalid Hexadecimal\n");
	for(int i = 0; i < strlen(hex); i++)
	{	
		long long sum;
		int digit;
		currentPower = strlen(hex) - i - 1;
		hex[i] = toupper(hex[i]);
		if(isdigit(hex[i]))
    	{
        	digit = hex[i] - '0';
    	}
		else if(hex[i] >= 'A' && hex[i] <= 'F')
    	{
        	digit = hex[i] - 'A' + 10;
    	}
		else
		{
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}
		sum = digit * (long)pow(16, currentPower);
		decimal = decimal + sum;
		//printf("%d\n", sum);
	}
	// print the decimal result
	printf("decimal:%lld\n", decimal);
	
	return 0;
}