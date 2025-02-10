#include<stdio.h>
void printBinary(unsigned char byte){
	for(int i = 7;i>=0;i--){
		printf("%d",(byte >> 1)&1);
	
	}

}

int main(int argc, char *argv[]){
	int a = 10;
	unsigned char *ptr = (unsigned char*)&a;
	/* a char is 1 byte (8 bits), making it perfect for reading individual bytes of memory */
	printf("Memory Representation of int a = %d:\n",a);
	for(size_t i = 0; i < sizeof(a);i++){
		printf("Byte Hexa  %zu:0x%02X  Binary :%zu  \n",i,ptr[i],printBinary(ptr[i]));
	
	}
	return 0;
	
}


