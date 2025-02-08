#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	int a = 10;
	int *p = &a;
	printf("Address of a:%p\n",p);
	printf("Value of a:%d\n",*p);
	printf("Using (void*) address of a:%p\n",(void *)p);
	printf("\n\n");
	char c = 'x';
	char *q = &c;
	printf("Address of c:%p\n",q);
	printf("Value of c:%c\n",*q);
	printf("Using (void*) address of c:%p\n",(void*)q);
	printf("\n\n");
	
	float d = 12.434;
	
	float *r = &d;
	printf("Address of d:%p\n",r);
	printf("using (void*) address of d:%p\n",(void*)r);
	printf("value of d:%f\n",*r);
	
	char *string = "this is a string";
	printf("Address of string:%p\n",string);
	printf("using (void*) address of string:%p\n",(void*)string);
	
	
	exit(0);
}
