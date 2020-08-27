#include <stdio.h>
int main(){
	char N;
	double S, P;
	scanf("%s %lf %lf", &N, &S, &P);
	printf("TOTAL = R$ %.2lf\n", S + (15*P)/100);
	return 0;
}
