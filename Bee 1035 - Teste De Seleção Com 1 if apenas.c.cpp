#include<stdio.h>

main(){
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	if(b>c && d>a){
		if((c+d)>(a+b)){
			if(c>0 && d>0 && (a%2)==0){
				printf("Valores aceitos\n");
			}else{
				printf("Valores nao aceitos\n");
			}
		}else{
			printf("Valores nao aceitos\n");
		}
	}else{
		printf("Valores nao aceitos\n");
	}
	
	return 0;
}
