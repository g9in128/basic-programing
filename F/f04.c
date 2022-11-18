#include<stdio.h>

int main() {
	int from, to;
	scanf("%d%d",&from,&to);
	for (int i = from; i < to + 1; i++) {
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
}