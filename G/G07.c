#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
	int inn;
	scanf("%d",&inn);
	int tmp = inn-1;
	int max = (int) sqrt(inn) + 1;
	int* arr = (int*)malloc(sizeof(int) * (inn-1));
	for (int i = 0;i < inn-1;i++) {
		arr[i] = 1;
	}
	for (int i =0; i < max -1; i++) {
		if (arr[i] == 0) continue;
		for (int j = (i + 2) * 2; j <= inn; j+=i + 2) {
			if (arr[j-2] == 1) tmp--;
			arr[j-2] = 0;
		}
	}
	printf("%d\n",tmp);
	free(arr);
}
