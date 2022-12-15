#include<stdio.h>
main(){
	int n;    
     printf("ENTER size= ");
     scanf("%i",&n);    
     int a[n];
     int *p[n];   
     int i;   
     for(i=0;i<n;i++){
     	printf("ENTER the value[%i]=",i);
     	scanf("%i",&a[n]);
	 }
	 for(i=0;i<n;i++){ 	
	 	p[i]=&a[i]; 
		 printf("%u => %i\n",p[i],*p[i]);	
	 }	
}
