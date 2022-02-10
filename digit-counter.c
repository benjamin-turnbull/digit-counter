/* counts the amount of digits in a number inputted by the user */

#include <stdio.h>

int main (void) {
	int digits = 0, n;

	printf("Enter a number: \n");
	scanf("%d", &n);

	do {
		n /= 10;
		digits++;
	} while (n > 0);

	printf("The number has %d digit(s).\n", digits);

	return 0;
}
