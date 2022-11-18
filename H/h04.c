#include<stdio.h>

int main() {
	char ch;
	int cnt=0;
	while ((ch = getchar()) != '\n') {
		if (ch == '(') cnt++;
		else if (ch == ')') cnt--;
		if (cnt < 0) break;
	}
	printf(cnt == 0 ? "YES" : "NO");
}