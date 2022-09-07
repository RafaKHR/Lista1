#include<stdio.h>
int main(){
	double A, B, soma, media;
	printf("Digite a nota A: ");
	scanf("%lf", &A);
	printf("Digite a nota B: ");
	scanf("%lf", &B);
	soma=A+B;
	media=soma/2;
	printf("A media do aluno eh: %lf", media);
}
