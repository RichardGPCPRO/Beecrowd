#include<stdio.h>

main(){
	int x,y,soma=0,j;
	scanf("%d %d",&x,&y);
	if(x>y){
		for(x=x-1;x>y;x--){
			if((x%2)!=0){
				soma+=x;
			}
		}
	}else{
		for(x=x+1;x<y;x++){
			if((x%2)!=0){
				soma+=x;
			}
		}
	}
	printf("%d\n",soma);
	return 0;
}
