// check if a file exists or not
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("hello.c" , "r");
    if(fptr == NULL)
    printf("file does not exist");
    else
    {
    printf("file exists");
    fclose(fptr);
}
    return 0;
}