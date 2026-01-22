// 2 numbers are written in a file . Replace them with their sum in a file
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("hello.c" , "r");
    if(fptr == NULL)
    {
        printf("data can't be written \n");
        return 0;
    }
    int a , b;
    fscanf(fptr , "%d" , &a);
    fscanf(fptr , "%d" , &b);
    int s = a+b;
    fclose(fptr);
    fptr = fopen("hello.c" , "w");
    if( fptr == NULL)
    {
        printf("file doesn't exist");
        return 0;
    }
    fprintf(fptr , "%d" , s);
    fclose(fptr);
     return 0;
}