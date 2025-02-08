#include<stdio.h>

int main(){
	int a = 10;
	printf("address of a: %p\n",(void*)&a);
	printf("size of a %lu:\n",sizeof(a));
	
	
	int *p; /*here p contains a gurbage memory(random) address*/
	
	/* int *p = 100; This dicleration is invalid and incorrect
	because p is a pointer, and assigning it a direct integer 
	value without a proper memory address will lead to undefined behavior,
	On most systems, this will cause a segmentation fault (crash) at runtime.*/
	
	/*sizeof(p)  returns the size of the value it stors,On most systems, this will cause a segmentation fault (crash) at runtime.*/
	printf("size of p: %lu\n",sizeof(p));
	
	/*sizeof(*p) returns the size of the */
	printf("size of *p: %lu\n",sizeof(*p));
	
	
	
	
	return 0;
}
