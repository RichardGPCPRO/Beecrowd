#include<stdio.h>

main(){
	int x;
	double y, total;
	scanf("%d %lf",&x,&y);
	total=x/y;
	printf("%0.3lf km/l\n",total);
	return 0;
}
