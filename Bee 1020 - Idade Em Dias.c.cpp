#include<stdio.h>
main(){
	const int ano=365,mes=30;
	int dias, anof,mesf,diaf;
	scanf("%d",&dias);
	anof=dias/ano;
	mesf=(dias%ano)/mes;
	diaf=(dias%ano)%mes;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",anof,mesf,diaf);
	
	return 0;
}
