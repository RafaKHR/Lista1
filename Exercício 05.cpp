#include<stdio.h>
int main(){
	int fios, n1, n2, resultado;
	printf("Digite a quantidade necessaria de fios em metros: ");
	scanf("%d", &fios);
	n1=fios/50;
	printf("Sao necessarios %d rolos", n1);
	n2=fios%50;
	printf("Sao necessarios %d metros avulsos de fio", n2);
}
