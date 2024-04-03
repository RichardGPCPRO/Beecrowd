#include <stdio.h>
 
int main() {
 	int j,x,n;
 	scanf("%d",&n);
 	for(j=1;j<=n;j++){
 		scanf("%d",&x);
 		if(x==0){
 			printf("NULL\n");
		 }else if((x%2)==0){
		 	if(x>0){
		 		printf("EVEN POSITIVE\n");
			 }else{
			 	printf("EVEN NEGATIVE\n");
			 }
		 }else{
		 	if(x>0){
		 		printf("ODD POSITIVE\n");
			 }else{
			 	printf("ODD NEGATIVE\n");
			 }
		 }
	}
 	return 0;
}
