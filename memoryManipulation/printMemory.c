#include<stdio.h>

int main(){
	int a = 10;
	unsigned char *ptr_a = (unsigned char*)&a;
	// %zu is used to print size_t
	printf("\nMemory Representation of int a = %d\n",a);
	for(size_t i = 0;i<sizeof(a);i++){
		printf("Byte Hexa %zu: 0x%02X, address :%p \n",i,ptr_a[i],(void*) ptr_a);
	
	}
	printf("\n Memory Representation of int b = 20 \n");
	int b = 100;
	unsigned char *ptr_b = (unsigned char*)&b;
	for(size_t i= 0; i<sizeof(b);i++){
		printf("Byte Hexa %zu: 0x%02X, address :%p \n",i,ptr_b[i],(void*) ptr_b);
	}

	int c = 30;
	unsigned char *ptr_c = (unsigned char*) &c;
	printf("\nManually printing of int c = 30\n");
	printf("index 0 = 0x%2X\n",ptr_c[0]);
	printf("index 1 = 0x%2X\n",ptr_c[1]);
	printf("index 2 = 0x%2X\n",ptr_c[2]);
	printf("index 3 = 0x%2X\n",ptr_c[3]);


	return 0;
}


