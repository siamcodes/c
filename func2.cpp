#include <stdio.h>

float rectangle(int w, int l){
	float answer;
	answer=w*l;
	return answer;
}

main(){
	int w, l;
	printf("Enter Width:");
	scanf("%d", &w);
	printf("Enter Long:");
	scanf("%d", &l);
	printf("%.2f", rectangle(w,l));
}

