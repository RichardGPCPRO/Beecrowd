#include<stdio.h>

main(){
	int c,f,x;
	printf("Digite \n1 para fahrenheit \n2 para celcius\n:");
	scanf("%d",&x);
	switch(x){
		case 1:
			scanf("%d",&c);
			f=((c*9)/5)+32;
			printf("\nTemperatura em Fahreinhet: %d",f);
		break;
		case 2:
			scanf("%d",&f);
			c=((f-32)*5)/9;
			printf("\nTemperatura em celcius: %d",c);
		break;
		default:
			printf("opcao invalida");
	}
		return 0;
}
