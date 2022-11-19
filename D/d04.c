#include<stdio.h>
#include<string.h>

int main() {
	char name[31],fname[31];
	int age;
	scanf("%s%s%d", fname,name,&age);
	printf("%d %d", strlen(name) + strlen(fname), age);
	
}