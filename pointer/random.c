#include<stdio.h>

int main(){
	int a = 10;
	printf("address of a: %p\n",(void*)&a);
	printf("size of a %lu:\n",sizeof(a));
	
	
	int *p;/*This dicleration is invalid and incorrect
	because p is a pointer, and assigning it a direct integer 
	value without a proper memory address will lead to undefined behavior*/
	/*sizeof(p)  returns the size of the value it stors*/
	printf("size of p: %lu\n",sizeof(p));
	
	/*sizeof(*p) returns the size of the */
	printf("size of *p: %lu\n",sizeof(*p));
	










//	int a = 0;
//	printf("size of a = %lu\n",sizeof(a));
//	printf("value of a = %d\n",a);
//	printf("address of a = %p\n",(void*)&a);
//	
//	printf("\n\n\n");
//	
//	
//	int *p = 10; 
//	printf("size of p = %lu\n",sizeof(p));
//	printf("value of p = %d\n",p);	
//	printf("address of p = %p\n",(void*)&p);
	
	
  
	return 0;
}
