#include<stdio.h>

main(){
	int x,qtde=0,numero;
	for(x=1;x<=5;x++){
		scanf("%d",&numero);
		if((numero%2)==0){
			qtde++;
		}	
	}
	printf("%d valores pares\n",qtde);
	return 0;
}
