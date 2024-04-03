#include<stdio.h>

main(){
	int numero,horas;
	double valor,salario;
	scanf("%d %d %lf",&numero,&horas,&valor);
	salario=horas*valor;
	printf("NUMBER = %d\nSALARY = U$ %0.2lf\n",numero,salario);
	return 0;
}
