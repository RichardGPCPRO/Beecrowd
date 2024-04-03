#include<stdio.h>
main(){
	int tempo, velocidade;
	scanf("%d %d",&tempo,&velocidade);
	printf("%0.3f\n",tempo*velocidade/12.0);
	return 0;
}
