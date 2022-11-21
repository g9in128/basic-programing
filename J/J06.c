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
	int n,m;
	scanf("%d %d",&n,&m);
	int** matrix1 = inputMatrix(n,m);
	int** matrix2 = inputMatrix(n,m);
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < m;j++) {
			printf("%d ",matrix1[i][j] + matrix2[i][j]);
		}
		printf("\n");
	}
}
