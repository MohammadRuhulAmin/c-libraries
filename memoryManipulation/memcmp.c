#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int main(int argc, char *argv[]){
    int arr1[] = {1,2};
    int arr2[] = {1,2};
    printf("%d: ",memcmp(arr1,arr2,2* sizeof(int)));




    return 0;
}

