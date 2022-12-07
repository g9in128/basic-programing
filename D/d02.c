#include<stdio.h>
#include<string.h>
// 성과 이름이 주어졌을때 성과 이름 각각의
// 글자 수를 성과 이름의 끝과 처음에 출력하는 프로그램을 작성하라. 

int main() {
	char a[31] ,b[31];
	scanf("%s%s", a, b);
	int lenA = strlen(a), lenB = strlen(b);
	printf("*%s %s*\n", a, b);
	printf("*%*d %*d*\n", lenA, lenA, lenB, lenB);
	printf("*%s %s*\n", a, b);
	printf("*%-*d %-*d*\n", lenA, lenA, lenB, lenB);
}
