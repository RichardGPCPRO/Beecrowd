#include<stdio.h>

main(){
	float numero;
	int x,qtde=0;
	for(x=1;x<=6;x++){
		scanf("%f",&numero);
		if(numero>0){
			qtde++;
		}	
	}
	printf("%d valores positivos\n",qtde);
	return 0;
}
