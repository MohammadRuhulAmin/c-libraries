#include<stdio.h>
#include<stdlib.h>
int main(int argc, char * argv[]){    
    for(int i = 0;i < argc;i++){
    	printf("arg for i: %d = %s\n",i,argv[i]);
    }
    
    exit(0);
}
