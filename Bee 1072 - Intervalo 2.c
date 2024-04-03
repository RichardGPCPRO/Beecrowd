#include <stdio.h>
int main() {
	int N,X,y,in=0,out=0;
	scanf("%d",&N);
	for(y=1;y<=N;y++){
		scanf("%d",&X);
		if(X>=10 && X<=20){
			in++;
		}else{
			out++;
			}
		
	}
	printf("%d in\n%d out\n",in,out);
    return 0;
}
