#include<stdio.h>

int main() {
	int cnt = 0,p = 3,d;
	for (int i = 0;i<12;i++) {
		char ch = getchar();
		d = ch - '0';
		cnt += p * d;
		p = p == 3 ? 1 : 3;
	}
	int mod = cnt % 10;
	if (mod == 0) {
		printf("YES");
	}else {
		printf("%d", (10 - (cnt - d) % 10) % 10);
	}
}
