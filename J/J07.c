#include<stdio.h>
#include<stdlib.h>

// Çà·Ä°ö 

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
	int n,m,p;
	scanf("%d %d %d",&n,&m,&p);
	int** matrix1 =	inputMatrix(n,m);
	int** matrix2 = inputMatrix(m,p);
	
	for (int i = 0; i < n;i++) {
		for (int j = 0; j < p;j++) {
			int sum = 0;
			for (int k = 0; k < m;k++) {
				sum += matrix1[i][k] * matrix2[k][j];
			}
			printf("%d ",sum);
		}
		printf("\n");
	}
}
