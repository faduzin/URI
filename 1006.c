#include<stdio.h>
int main() {
	double A, B, C, X;
	scanf("%lf %lf %lf", &A, &B, &C);
	X = (2*A+3*B+5*C)/10;
	printf("MEDIA = %.1lf\n",X);
	return 0;
}
