#include<stdio.h>

//2차원 평면상에 세 점 
//(x1,y1),(x2,y2),(x3,y3)로 이루어진 삼각형이 있다. 
// 이 삼각형의 면적을 구하는 프로그램을 작성하라. 

int abs(int a) {
	return a >= 0 ? a : -a;
}

int mid(int a, int b, int c) {
	int mid = a;
	if (mid < b) mid = b;
	if (mid > c) {
		if (mid == a) {
			if (c > b) mid = c;
			else mid = b;
		}
		else {
			if (c > a) mid = c;
			else mid = a;
		}
	}
	return mid;
}

int main() {
	int x1, y1, x2, y2, x3, y3,mxx,mxy,myx,myy,col,row;
	double tsum;
	scanf("%d%d%d%d%d%d", &x1, &y1, &x2, &y2, &x3, &y3);
	mxx = mid(x1, x2, x3);
	mxy = mxx == x1 ? y1 : mxx == x2 ? y2 : y3;
	myy = mid(y1, y2, y3);
	myx = myy == y1 ? x1 : myy == y2 ? x2 : x3;

	col = abs(mxx - x1);
	col += abs(mxx - x2);
	col += abs(mxx - x3);
	row = abs(myy - y1);
	row += abs(myy - y2);
	row += abs(myy - y3);

	tsum = 1 / 2.0 * (abs((mxx - x1))) * (abs((mxy - y1)));
	tsum += 1 / 2.0 * (abs((mxx - x2))) * (abs((mxy - y2)));
	tsum += 1 / 2.0 * (abs((mxx - x3))) * (abs((mxy - y3)));
	
	tsum += 1 / 2.0 * (abs((myx - x1))) * (abs((myy - y1)));
	tsum += 1 / 2.0 * (abs((myx - x2))) * (abs((myy - y2)));
	tsum += 1 / 2.0 * (abs((myx - x3))) * (abs((myy - y3)));

	tsum -= 1 / 2.0 * (abs((myx - mxx))) * (abs((myy - mxy)));
	
	printf("%.2lf", (double)col * row - tsum);
}
