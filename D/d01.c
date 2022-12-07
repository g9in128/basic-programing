#include<stdio.h>
// 파일크기(MB)와 다운로드 속도(MBps)를 입력받아 다운로드하는데 
// 걸리는 시간을 출력하는 프로그램을 작성하라. 

int main() {
	float mbps, mb;
	scanf("%f%f", &mbps, &mb);
	printf("%.2fsec", mb / (mbps / 8));
}
