#include<stdio.h>

//두 개의 정수 a, b를 입력으로 받아서, a부터 b까지의 제곱, 
// 세제곱 표를 만드는 프로그램을 작성하라. 

int main() {
	int from, to;
	scanf("%d%d",&from,&to);
	for (int i = from; i < to + 1; i++) {
		printf("%d %d %d\n", i, i * i, i * i * i);
	}
}
