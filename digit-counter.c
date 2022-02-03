/* counts the amount of digits in a number inputted by the user */

#include <stdio.h>

int main (void) {
	int number, digits;

	printf("Enter a number: \n");
	scanf("%d", &number);

	if (number < 10)
		printf("This number  has one digit.");
	else if (number >10, number < 99)
		printf("This number has two digits.");
	else if (number > 100, number < 999)
		printf("This number has three digits.");
	else if (number > 1000, number < 9999)
		printf("This number has four digits.");
	else
		printf("This number has over four digits.");


	return 0;
}
