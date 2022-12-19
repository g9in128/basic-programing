#include<stdio.h>
#include<math.h>

// 2차원 평면상에 두 점 (x1,y1),(x2,y2)이 있다.
// 이 두 점의 거리를 구하는 프로그램을 작성하라.
int main() {
	double x1, x2, y1, y2,a,b,c;
	scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);
	a = x1 - x2;
	b = y1 - y2;
	c = sqrt(pow(a, 2) + pow(b, 2));
	printf("%.4lf", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}
