#include <stdio.h>
int main(){
	double R, pi;
	pi = 3.14159;
	scanf("%lf", &R);
	printf("VOLUME = %.3lf\n", pi*R*R*R*(4.0/3));
	return 0;
}
