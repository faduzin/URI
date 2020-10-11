#include <stdio.h>
int main(){
    double a, b, c, m1, m2, m3;
	scanf("%lf %lf %lf", &a, &b, &c);
	if(a >= b && a >= c){
		m1 = a;
		m3 = b;
		m2 = c;
	}
	if(b >= a && b >= c){
		m1 = b;
		m3 = a;
		m2 = c;
	}
	else{
		m1 = c;
		m3 = a;
		m2 = b;
	}
	if(m1 >= m3 + m2){
		printf("NAO FORMA TRIANGULO\n");
	}
	else{
	if(m1*m1 == m3*m3 + m2*m2){
		printf("TRIANGULO RETANGULO\n");
	}
	if(m1*m1 > m3*m3 + m2*m2){
		printf("TRIANGULO OBTUSANGULO\n");
	}
	if(m1*m1 < m3*m3 + m2*m2){
		printf("TRIANGULO ACUTANGULO\n");
	}
	if(m1 == m3 && m1 == m2){
		printf("TRIANGULO EQUILATERO\n");
	}
	if(m1 == m3 && m1 != m2 && m2 != m3){
		printf("TRIANGULO ISOSCELES\n");
	}
	if(m3 == m2 && m1 != m3 && m1 != m2){
		printf("TRIANGULO ISOSCELES\n");
	}
	if(m1 == m2 && m2 != m3 && m1 != m3){
		printf("TRIANGULO ISOSCELES\n");
	}
	}
	return 0;
}
