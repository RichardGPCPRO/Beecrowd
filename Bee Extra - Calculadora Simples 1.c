#include<stdio.h>

main(){
	int opcao;
	float n1,n2,resultado;
	scanf("%f %f",&n1,&n2);
	scanf("%d",&opcao);
	switch(opcao){
		case 1:
			resultado=n1+n2;
		break;
		case 2:
			resultado=n1-n2;
		break;
		case 3:
			resultado=n1/n2;
		break;
		case 4:
			resultado=n1*n2;
		break;
		default:
			printf("opcao invalida");
	}
	printf("Resultado: %0.2f",resultado);
	return 0;
}
