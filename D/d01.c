#include<stdio.h>
// ����ũ��(MB)�� �ٿ�ε� �ӵ�(MBps)�� �Է¹޾� �ٿ�ε��ϴµ� 
// �ɸ��� �ð��� ����ϴ� ���α׷��� �ۼ��϶�. 

int main() {
	float mbps, mb;
	scanf("%f%f", &mbps, &mb);
	printf("%.2fsec", mb / (mbps / 8));
}
