#include <stdio.h>
#include<string.h>
main(){
	char username[10];
	char password[10];
	
	printf("Enter Username: ");
	scanf("%s", &username);
	printf("Enter Password: ");
	scanf("%s", &password);
	
	if(strcmp(username,"admin")==0  && strcmp(password,"1234")==0){
		printf("YES");
	}else{
		printf("NO");
	}
		
}
