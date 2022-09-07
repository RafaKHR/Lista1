#include<stdio.h>
int main(){
	double media, n1, n2, n3, soma;
	printf("Digite o primeiro numero: ");
	scanf("%lf", &n1);
	
	printf("Digite o segundo numero: ");
	scanf("%lf", &n2);
	
	printf("Digite o terceiro numero: ");
	scanf("%lf", &n3);
	
	soma=n1+n2+n3;
	media=soma/3;
	
	printf("A media aritmetica eh: %lf", media);
}
