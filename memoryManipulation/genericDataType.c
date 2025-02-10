#include<stdio.h>


int main(int argc, char *argv[]){
	int a = 10;
	/* unsigned keyword in C is used to define integer types that cannot be represent negative values. */
	/* secondly (void *) &a, here &a = int pointer type and (void*) => generic pointer type,
	 *  so we are type casting from pointer int type to generic pointer type. 
	 *  when we use generic function like memcpy(), malloc() we need to use generic pointer  */
	/* generic key word stands for, in programming refers to the concept of writing code that can work with any data type, rather than type-dependent
	 * */
	unsigned char *ptr = (void *)&a; 
	printf("%p",ptr);	
	return 0;

}
