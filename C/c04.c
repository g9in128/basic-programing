#include<stdio.h>

int main() {
	float cup, pint, ounce, tablespoon, teaspoon;
	scanf("%f", &cup);
	pint = cup / 2;
	ounce = cup * 8;
	tablespoon = ounce * 2;
	teaspoon = tablespoon * 3;
	printf("%f cups are equivalent to each of the following:\n%f pints\n%f tablespoons\n%f teaspoons\n",cup, pint, tablespoon, teaspoon);
}