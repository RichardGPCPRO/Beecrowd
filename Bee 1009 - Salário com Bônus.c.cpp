#include<stdio.h>

main(){
	char nome[10];
	double salario,vendas,comissao;
	scanf("%s %lf %lf",&nome,&salario,&vendas);
	comissao=vendas*0.15;
	printf("TOTAL = R$ %0.2lf\n",salario+comissao);
	return 0;
}
