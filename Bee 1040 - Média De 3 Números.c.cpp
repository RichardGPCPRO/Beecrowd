#include<stdio.h>

main(){
	double n1,n2,n3,n4,media,exame;
	scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);
	media=((n1*2)+(n2*3)+(n3*4)+(n4*1))/10;
	if(media>=7){
		printf("Media: %0.1lf\nAluno aprovado.\n",media);
	}else if(media<5){
		printf("Media: %0.1lf\nAluno reprovado.\n",media);
	}else{
		printf("Media: %0.1lf\nAluno em exame.\n",media);
		scanf("%lf",&exame);
		media=(media+exame)/2;
		printf("Nota do exame: %0.1lf\n",exame);
		if(media>=5){
			printf("Aluno aprovado.\n");
		}else{
			printf("Aluno reprovado.\n");
		}
		printf("Media final: %0.1lf\n",media);
	}
	
	return 0;
}
