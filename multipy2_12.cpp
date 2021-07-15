#include <stdio.h>
main(){
	int i,x,z;
	
	for(i=1; i<=12; i++){
		for(x=2; x<=12; x++){
			z=x*i;
			printf("%d * %d = %d\n",i,x,z);
		}
		printf("\n");	
	}
}

