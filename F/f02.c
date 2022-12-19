#include<stdio.h>
#include<malloc.h>

// C
// CB
// CBA

// 하나의 정수를 입력으로 받아서 그 정수의 줄 수만큼 
// 위와 같이 역순의 알파벳을 출력하는 
// 프로그램을 작성하라. 

int main() {
	int size;
	scanf("%d", &size);
	char* ch = (char*)malloc(size + 1);
	for (int i = 0; i < size; i++) {
		ch[i] = 'A' + size - i - 1;
		ch[i + 1] = '\0';
		printf("%s\n", ch);
	}
	free(ch);
}
