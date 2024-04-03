#include<stdio.h>

main (){
	int qtde=0,x;
	float media=0,numeros=0,numero=0;
	for(x=0;x<6;x++){
		scanf("%f",&numero);
		if(numero>0){
			numeros+=numero;
			qtde++;
		}
	}
	media=numeros/qtde;
	printf("%d valores positivos\n%0.1f\n",qtde,media);
	return 0;
}
