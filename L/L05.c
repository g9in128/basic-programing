#include<stdio.h>
#include<ctype.h>
#include<math.h>

int main() {
	char ch;
	int sum = 0;
	while(1) {
		ch = getchar();
		if (ch == '\n') {
			printf("%d\n",sum);
			sum = 0;
			continue;
		}
		if (isalpha(ch)) break;
		if (isdigit(ch)) sum += (int) round(pow(ch - '0',3));
	}
}
