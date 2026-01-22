// write all odd numbers from 1 to n in a file
#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("student.c" , "w");
    if(fptr == NULL)
    {
        printf("data can't be written \n");
        return 0;
    }
    int i , n;
    printf("enter the value of n \n");
    scanf("%d" , &n);
    for( i = 1; i<=n ; i++)
    {
        if(i%2 != 0)
        fprintf(fptr , "%d" , i);
    }
    
     fclose(fptr);
     return 0;
}