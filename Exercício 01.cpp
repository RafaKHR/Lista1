#include<stdio.h>
int main(){
	double h, m, s;
	printf("Digite as Horas: ");
	scanf("%lf", &h);
	m=h*60;
	printf("O valor em minutos = %lf", m);
	
	
	s=m*60;
	printf("O valor em segundos = %lf", s);
}
