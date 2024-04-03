#include<stdio.h>

main(){
	int X,Y=1;
	scanf("%d",&X);
	while(Y<=6){
		if((X%2)==1){
			printf("%d\n",X);
			Y++;
		}
		X++;
	}
	return 0;
}
