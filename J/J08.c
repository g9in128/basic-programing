#include<stdio.h>
#include<stdlib.h>

int** inputMatrix(int row,int col) {
	int** arr = (int**) malloc(sizeof(int*) * row);
	for (int i = 0; i < row;i++) {
		arr[i] = (int*) malloc(sizeof(int) * col);
		for (int j = 0;j < col;j++) {
			scanf("%d",arr[i] + j);
		}
	}
	return arr;
}

int main() {
	int a,b,c,d,e,f;
	scanf("%d %d",&a,&b);
	int** m1 = inputMatrix(a,b);
	scanf("%d %d",&c,&d);
	int** m2 = inputMatrix(c,d);
	scanf("%d %d",&e,&f);
	int** m3 = inputMatrix(e,f);

	if (b != c || a != e || d != f) {
		printf("NO");
		return 0;
	}

	int** m4 = (int**) malloc(sizeof(int*) * a);

	for (int i = 0; i < a;i++) {
		m4[i] = (int*) malloc(sizeof(int) * d);
		for (int j = 0; j < d;j++) {
			int sum = 0;
			for (int k = 0; k < b;k++) {
				sum += m1[i][k] * m2[k][j];
			}
			m4[i][j] = sum;
		}
	}
	for (int i = 0; i < e;i++) {
		for (int j = 0; j < f;j++) {
			printf("%d ",m3[i][j] + m4[i][j]);
		}
		printf("\n");
	}
}
