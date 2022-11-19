#include<stdio.h>
#include<string.h>

int main() {
	char a[31] ,b[31];
	scanf("%s%s", a, b);
	int lenA = strlen(a), lenB = strlen(b);
	printf("*%s %s*\n", a, b);
	printf("*%*d %*d*\n", lenA, lenA, lenB, lenB);
	printf("*%s %s*\n", a, b);
	printf("*%-*d %-*d*\n", lenA, lenA, lenB, lenB);
}