#include<stdio.h>

main(){
	const double percentual[5]={0.15,0.12,0.10,0.07,0.04};
	double salario,reajuste;
	scanf("%lf",&salario);
	if(salario>=0 && salario<=400){
		reajuste=salario*percentual[0];
		salario=salario+reajuste;
		printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 15 %%\n",salario, reajuste);
	}else if(salario>400 && salario <=800){
		reajuste=salario*percentual[1];
		salario=salario+reajuste;
		printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 12 %%\n",salario, reajuste);
	}else if(salario>800 && salario <=1200){
		reajuste=salario*percentual[2];
		salario=salario+reajuste;
		printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 10 %%\n",salario, reajuste);
	}else if(salario>1200 && salario <=2000){
		reajuste=salario*percentual[3];
		salario=salario+reajuste;
		printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 7 %%\n",salario, reajuste);
	}else{
		reajuste=salario*percentual[4];
		salario=salario+reajuste;
		printf("Novo salario: %0.2lf\nReajuste ganho: %0.2lf\nEm percentual: 4 %%\n",salario, reajuste);
	}
		
	return 0;
}
