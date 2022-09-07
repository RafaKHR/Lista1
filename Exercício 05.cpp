#include<stdio.h>
int main(){
	double rolo, n1, n2, resultado;
	int fios;
	printf("Digite a quantidade necessaria de fios em metros: ");
	scanf("%d", &fios);
	n1=fios/50;
	printf("Sao necessarios %lf rolos", n1);
	n2=fios%50;
	printf("Sao necessarios %lf metros avulsos de fio", n2);
}
