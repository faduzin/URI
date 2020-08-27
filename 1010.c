#include <stdio.h>
int main(){
	int A, B, n1, n2;
	float p1, p2, p3;
	scanf("%d %d %f \n", &n1, &A, &p1);
	scanf("%d %d %f", &n2, &B, &p2);
	p3 = A*p1+B*p2;
	printf("VALOR A PAGAR: R$ %.2f\n", p3);
	return 0;	
}
