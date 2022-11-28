#include<stdio.h>

#define OR 1
#define AND 2
#define NOR 3
#define NAND 4
#define XOR 5

int gate(int type,int a,int b) {
	switch (type) {
	case 1:
		return a | b;
	case 2:
		return a & b;
	case 3:
		return !(a | b);
	case 4:
		return !(a & b);
	case 5:
		return a != b;
	}
}

int main() {
	int a,b,c,f;
	scanf("%d %d %d",&a,&b,&c);
	printf("w x y z		F\n");
	for(int i = 0; i < 16; i++) {
		int w = (i >> 3) & 1;
		int x = (i >> 2) & 1;
		int y = (i >> 1) & 1;
		int z = i & 1;
		int ga = gate(a,0,w);
		int gm = gate(NAND,x,y);
		int gb = gate(b,y,z);
		int gl = gate(NOR,ga,gm);
		int gc = gate(c,gm,gb);
		f = gate(XOR,gl,gc);
		printf("%d %d %d %d		%d\n",w,x,y,z,f);
	}

}
