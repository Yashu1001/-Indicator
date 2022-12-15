#include<stdio.h>
void swap(int *a,int *b){
	
	int c;
	
	c=*a;
   *a=*b;
   *b=c;
	
	printf("SWAPPED A= %i\n",*a);
	printf("SWAPPED B= %i",*b);		
}
main(){
   int x,y;
   
   printf("ENTER VALUE A= ");
   scanf("%i",&x);
   printf("ENTER VALUE B= ");
   scanf("%i",&y);
   
   swap(&x,&y);   	
}
