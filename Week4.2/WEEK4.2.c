#include<stdio.h>

int main() {
	int n,dist=1;
	double f = 500;
	double remain;
	printf("Enter weight(Ton) : ");
	scanf_s("%d", &n);
	remain = (n * 1000)-500;

	while (remain > 0) {
		dist = dist + 1;
		if (dist % 10 == 0 ) { 
			remain = remain + 10000; 
		}
		else {
			f = f + (f * (5.0 / 100));
			remain = remain - f;
		}	
	}
	printf("Distance = %d Kilometer", dist);
	return 0;
}
