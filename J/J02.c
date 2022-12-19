#include<stdio.h>
#include<limits.h>

// 두번째 작은 수 

int main() {
	int num,min = INT_MAX,min2 = INT_MAX - 1,data;
	scanf("%d", &num);
	for (int i = 0; i < num; i++) {
		scanf("%d", &data);
		if (data < min) {
			min2 = min;
			min = data;
		}
		else if (data < min2) {
			min2 = data;
		}
	}
	printf("%d", min2);
}
