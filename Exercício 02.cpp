#include<stdio.h>
int main(){
	double a, r, r2;
	printf("Digite o numero do raio: ");
	scanf("%lf", &r);
	r2=r*r;
	a=3.14*r2;
	printf("A area eh: %lf", a);
}
