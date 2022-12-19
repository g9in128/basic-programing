#include<stdio.h>
#include<malloc.h>

// $
// $$
// $$$
// $$$$

// 하나의 정수를 입력으로 받아서 그 정수의 줄 수만큼 
// 위와 같은 모양으로 출력하는 프로그램을 작성하라.
int main() {
	int size;
	scanf("%d", &size);
	char* ch = (char*) malloc(size + 1);
	for (int i = 0; i < size; i++) {
		ch[i] = '$';
		ch[i + 1] = '\0';
		printf("%s\n", ch);
	}
	free(ch);
}
