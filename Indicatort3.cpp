#include<stdio.h>
main(){
	char str[100],*p;
	int i;
	
	printf("ENTER STRING= ");
    gets(str);
	
	p=str;
	
	for(i=0;*p!='\0';i++){
		p++;
	}
	printf("LENGTH= %i",i);
		
}
