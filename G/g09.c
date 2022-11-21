#include<stdio.h>
#define ARTICHOKE 2.05
#define BEAT 1.15
#define CARROT 1.09
#define DELIVERY_5 6.5
#define DELIVERY_20 14

int main() {
	int	size, weight;
	double price;
	weight = price = 0;
	scanf("%d", &size); 
	for (int i = 0; i < size; i++) {
		char type;
		do {
			type = getchar();
		}while(type < 'a' || type > 'c');
		int amount;
		scanf("%d", &amount);
		switch (type)
		{
		case 'a':
			price += amount * ARTICHOKE;
			break;
		case 'b':
			price += amount * BEAT;
			break;
		case 'c':
			price += amount * CARROT;
			break;
		default:
			break;
		}
		weight += amount;
	}
	if (price > 100) price *= 0.95;
	if (weight < 5) {
		price += DELIVERY_5;
	}
	else if (weight < 20) {
		price += DELIVERY_20;
	}
	else {
		price += DELIVERY_20 + (weight) * 0.5;
	}
	printf("%.2lf", price);
}
