#include<stdio.h>

main(){
	int codigo1,codigo2,qtde1,qtde2;
	double valor1,valor2,total;
	scanf("%d %d %lf",&codigo1,&qtde1,&valor1);
	scanf("%d %d %lf",&codigo2,&qtde2,&valor2);
	total=(qtde1*valor1)+(qtde2*valor2);
	printf("VALOR A PAGAR: R$ %0.2lf\n",total);
	return 0;
}
