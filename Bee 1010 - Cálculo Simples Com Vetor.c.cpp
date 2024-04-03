#include<stdio.h>

main(){
	int codigo[2],qtde[2];
	double valor[2],total;
	scanf("%d %d %lf",&codigo[1],&qtde[1],&valor[1]);
	scanf("%d %d %lf",&codigo[2],&qtde[2],&valor[2]);
	total=(qtde[1]*valor[1])+(qtde[2]*valor[2]);
	printf("VALOR A PAGAR: R$ %0.2lf\n",total);
	return 0;
}
