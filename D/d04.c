#include<stdio.h>
#include<string.h>
// 성과 이름, 그리고 나이를 입력 받아서
// 성과 이름이 문자 수와 나이를 출력하는 프로그램을 작성하라.

int main() {
	char name[31],fname[31];
	int age;
	scanf("%s%s%d", fname,name,&age);
	printf("%d %d", strlen(name) + strlen(fname), age);
	
}
