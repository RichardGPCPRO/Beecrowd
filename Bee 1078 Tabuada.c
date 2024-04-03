include<stdio.h>

main(){
	int n,x;
	scanf("%d",&n);
	for(x=1;x<=10;x++){
		printf("%d x %d = %d\n",x,n,x*n);
	}
	return 0;
}
