#include<stdio.h>

int main(){

	int a = 0;
	printf("size of a = %lu\n",sizeof(a));
	printf("value of a = %d\n",a);
	printf("address of a = %p\n",(void*)&a);
	
	printf("\n\n\n");
	
	
	int *p = 10; 
	printf("size of p = %lu\n",sizeof(p));
	printf("value of p = %d\n",p);	
	printf("address of p = %p\n",(void*)&p+1);
		
  
	return 0;
}
